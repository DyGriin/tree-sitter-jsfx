#include <tree_sitter/parser.h>
#include <cwctype>
#include <iostream>

enum TokenType
{
    kRawText,
    kRawTextSingleLine,
    kDescField,
    kImportKeyword,
    kSliderField,
    kSliderIdentifier,
    kSliderDefault,
    kSliderHiddenPrefix
};

static inline bool isEol(const TSLexer* lexer)
{
    return lexer->lookahead == '\r' || lexer->eof(lexer) ||
           lexer->lookahead == '\n';
}

// patch for web-tree-sitter
#ifdef __wasm__
#  define iswblank(ch) ((ch) == ' ' || (ch) == '\t')
#endif

class DescFieldScanner
{
public:
    explicit DescFieldScanner(TSLexer* lexer)
        : lexer(lexer), tokenType(kRawText)
    {}

    bool scan()
    {
        int pos = 0;
        int begin = 0;
        int end = kTableSize;
        while (!isEol(lexer))
        {
            if (kDescTable[begin].name[pos] == '\0')
                return scanTail(kDescTable[begin].type);
            // update range of possible field name
            for (; begin < end; begin++)
            {
                if (kDescTable[begin].name[pos] == lexer->lookahead)
                    break;
            }

            for (int i=begin + 1; i<end; i++)
            {
                if (kDescTable[i].name[pos] != lexer->lookahead)
                {
                    end = i;
                    break;
                }
            }

            if (begin >= end)
                return false;

            lexer->advance(lexer, false);
            pos++;
        }

        return false;
    }

    TokenType result() const
    {
        return tokenType;
    }

private:
    bool scanSliderNum()
    {
        if (lexer->lookahead < '1' || lexer->lookahead > '9')
            return false;

        char max2nd = lexer->lookahead < '6'? '9' :
                      lexer->lookahead == '6'? '4' : 0;

        lexer->advance(lexer, false);
        if (lexer->lookahead == ':')
            return true;

        if (lexer->lookahead < '0' || lexer->lookahead > max2nd)
            return false;

        lexer->advance(lexer, false);
        return lexer->lookahead == ':';
    }

    bool scanTail(TokenType type)
    {
        bool matched = type == kDescField? lexer->lookahead == ':' :
                       type == kImportKeyword? iswblank(lexer->lookahead) :
                       type == kSliderField? scanSliderNum() : false;
        if (matched)
            tokenType = type;

        return matched;
    }

    TSLexer* lexer;
    TokenType tokenType;

    static const struct FieldInfo {
        const char* name;
        TokenType type;
    } kDescTable[];
    static const int kTableSize;
};

// order by desc field
const DescFieldScanner::FieldInfo DescFieldScanner::kDescTable[] = {
    {"desc", kDescField},
    {"filename", kDescField},
    {"import", kImportKeyword},
    {"in_pin", kDescField},
    {"options", kDescField},
    {"out_pin", kDescField},
    {"slider", kSliderField},
};

const int DescFieldScanner::kTableSize = sizeof(DescFieldScanner::kDescTable) /
        sizeof(DescFieldScanner::FieldInfo);

class RawTextScanner
{
public:
    RawTextScanner(TSLexer* lexer, const bool* validSymbols)
        : lexer(lexer), scanDesc(validSymbols[kDescField])
    {}

    bool scan() const
    {
        if (!locateStartOfLine())
            return false;

        bool matched = false;
        DescFieldScanner descFieldScanner(lexer);
        while (1)
        {
            if (lexer->lookahead == '@' || lexer->eof(lexer))
                break;

            if (scanDesc && descFieldScanner.scan())
                break;

            goNextStartOfLine();
            matched = true;
        }

        if (matched)
        {
            lexer->result_symbol = kRawText;
            return true;
        }

        if (scanDesc && descFieldScanner.result() != kRawText)
        {
            lexer->result_symbol = descFieldScanner.result();
            lexer->mark_end(lexer);
            return true;
        }
        return false;
    }

private:
    bool locateStartOfLine() const
    {
        while (iswspace(lexer->lookahead) && lexer->get_column(lexer) != 0)
            lexer->advance(lexer, true);

        return lexer->get_column(lexer) == 0;
    }

    void goNextStartOfLine() const
    {
        // assert(scanDesc || lexer->get_column(lexer) == 0)
        lexer->advance(lexer, false);
        while (lexer->get_column(lexer) != 0 && !lexer->eof(lexer))
            lexer->advance(lexer, false);

        lexer->mark_end(lexer);
    }

    TSLexer* lexer;
    bool scanDesc;
};

class Scanner
{
public:
    bool scan(TSLexer* lexer, const bool* validSymbols)
    {
        if (validSymbols[kSliderDefault] &&
            scanSliderDefault(lexer, validSymbols[kSliderIdentifier]))
            return true;

        if (validSymbols[kSliderHiddenPrefix] && scanSliderHiddenPrefix(lexer))
            return true;

        if (validSymbols[kRawTextSingleLine] && scanRawTextSingleLine(lexer))
            return true;

        if (!validSymbols[kRawText])
            return false;

        return RawTextScanner(lexer, validSymbols).scan();
    }

    unsigned serialize(char*) { return 0; }
    void deserialize(const char*, unsigned) {}

private:
    void skipBlanks(TSLexer* lexer)
    {
        while (iswblank(lexer->lookahead))
            lexer->advance(lexer, true);
    }

    bool scanRawTextSingleLine(TSLexer* lexer)
    {
        skipBlanks(lexer);
        if (isEol(lexer))
            return false;

        while (!isEol(lexer))
            lexer->advance(lexer, false);

        lexer->result_symbol = kRawTextSingleLine;
        return true;
    }

    bool scanSliderDefault(TSLexer* lexer, bool scanIdentifier)
    {
        skipBlanks(lexer);
        bool matched = false;
        while (!isEol(lexer) && lexer->lookahead != '<')
        {
            if (matched && scanIdentifier && lexer->lookahead == '=')
                break;

            lexer->advance(lexer, false);
            matched = true;
        }

        if (!matched)
            return false;

        lexer->result_symbol = lexer->lookahead == '='? kSliderIdentifier :
                                                        kSliderDefault;
        return true;
    }

    bool scanSliderHiddenPrefix(TSLexer* lexer)
    {
        skipBlanks(lexer);
        if (lexer->lookahead != '-')
            return false;

        for (int i=0; i<3 && lexer->lookahead == '-'; i++)
            lexer->advance(lexer, false);
        lexer->result_symbol = kSliderHiddenPrefix;
        return true;
    }
};

extern "C" {

void* tree_sitter_jsfx_external_scanner_create()
{
    return new Scanner();
}

void tree_sitter_jsfx_external_scanner_destroy(void* payload)
{
    Scanner* scanner = static_cast<Scanner*>(payload);
    delete scanner;
}

unsigned tree_sitter_jsfx_external_scanner_serialize(void* payload, char* buffer)
{
    Scanner* scanner = static_cast<Scanner*>(payload);
    return scanner->serialize(buffer);
}

void tree_sitter_jsfx_external_scanner_deserialize(void* payload,
                                                   const char* buffer,
                                                   unsigned length)
{
    Scanner* scanner = static_cast<Scanner*>(payload);
    scanner->deserialize(buffer, length);
}

bool tree_sitter_jsfx_external_scanner_scan(void* payload, TSLexer* lexer,
                                            const bool* valid_symbols)
{
    Scanner* scanner = static_cast<Scanner*>(payload);
    return scanner->scan(lexer, valid_symbols);
}

}  // extern "C"
