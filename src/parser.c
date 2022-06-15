#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 3
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_COLON = 1,
  anon_sym_EQ = 2,
  anon_sym_LT = 3,
  anon_sym_GT = 4,
  anon_sym_COLON_SLASH = 5,
  sym_section_name = 6,
  sym__slider_info_body = 7,
  sym__slider_path = 8,
  sym_raw_text = 9,
  sym_raw_text_single_line = 10,
  sym_description_field = 11,
  sym__import_keyword = 12,
  sym_slider_field = 13,
  sym_slider_identifier = 14,
  sym__slider_default = 15,
  sym__slider_hidden_prefix = 16,
  sym_program = 17,
  aux_sym__description_section = 18,
  sym_code_section = 19,
  sym__section_header = 20,
  sym_description = 21,
  sym_slider_description = 22,
  sym__slider_numeric_right = 23,
  sym__slider_info = 24,
  sym__slider_filepath_right = 25,
  sym_import_description = 26,
  aux_sym_program_repeat1 = 27,
  anon_alias_sym_comments = 28,
  alias_sym_description_detail = 29,
  alias_sym_section_parameters = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COLON_SLASH] = ":/",
  [sym_section_name] = "section_name",
  [sym__slider_info_body] = "_slider_info_body",
  [sym__slider_path] = "_slider_path",
  [sym_raw_text] = "raw_text",
  [sym_raw_text_single_line] = "slider_name",
  [sym_description_field] = "description_field",
  [sym__import_keyword] = "import",
  [sym_slider_field] = "slider_field",
  [sym_slider_identifier] = "slider_identifier",
  [sym__slider_default] = "_slider_default",
  [sym__slider_hidden_prefix] = "_slider_hidden_prefix",
  [sym_program] = "program",
  [aux_sym__description_section] = "_description_section",
  [sym_code_section] = "code_section",
  [sym__section_header] = "_section_header",
  [sym_description] = "description",
  [sym_slider_description] = "slider_description",
  [sym__slider_numeric_right] = "_slider_numeric_right",
  [sym__slider_info] = "_slider_info",
  [sym__slider_filepath_right] = "_slider_filepath_right",
  [sym_import_description] = "import_description",
  [aux_sym_program_repeat1] = "program_repeat1",
  [anon_alias_sym_comments] = "comments",
  [alias_sym_description_detail] = "description_detail",
  [alias_sym_section_parameters] = "section_parameters",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON_SLASH] = anon_sym_COLON_SLASH,
  [sym_section_name] = sym_section_name,
  [sym__slider_info_body] = sym__slider_info_body,
  [sym__slider_path] = sym__slider_path,
  [sym_raw_text] = sym_raw_text,
  [sym_raw_text_single_line] = sym_raw_text_single_line,
  [sym_description_field] = sym_description_field,
  [sym__import_keyword] = sym__import_keyword,
  [sym_slider_field] = sym_slider_field,
  [sym_slider_identifier] = sym_slider_identifier,
  [sym__slider_default] = sym__slider_default,
  [sym__slider_hidden_prefix] = sym__slider_hidden_prefix,
  [sym_program] = sym_program,
  [aux_sym__description_section] = aux_sym__description_section,
  [sym_code_section] = sym_code_section,
  [sym__section_header] = sym__section_header,
  [sym_description] = sym_description,
  [sym_slider_description] = sym_slider_description,
  [sym__slider_numeric_right] = sym__slider_numeric_right,
  [sym__slider_info] = sym__slider_info,
  [sym__slider_filepath_right] = sym__slider_filepath_right,
  [sym_import_description] = sym_import_description,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [anon_alias_sym_comments] = anon_alias_sym_comments,
  [alias_sym_description_detail] = alias_sym_description_detail,
  [alias_sym_section_parameters] = alias_sym_section_parameters,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym__slider_info_body] = {
    .visible = false,
    .named = true,
  },
  [sym__slider_path] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_text_single_line] = {
    .visible = true,
    .named = true,
  },
  [sym_description_field] = {
    .visible = true,
    .named = true,
  },
  [sym__import_keyword] = {
    .visible = true,
    .named = false,
  },
  [sym_slider_field] = {
    .visible = true,
    .named = true,
  },
  [sym_slider_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__slider_default] = {
    .visible = false,
    .named = true,
  },
  [sym__slider_hidden_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__description_section] = {
    .visible = false,
    .named = false,
  },
  [sym_code_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section_header] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_slider_description] = {
    .visible = true,
    .named = true,
  },
  [sym__slider_numeric_right] = {
    .visible = false,
    .named = true,
  },
  [sym__slider_info] = {
    .visible = false,
    .named = true,
  },
  [sym__slider_filepath_right] = {
    .visible = false,
    .named = true,
  },
  [sym_import_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_comments] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_description_detail] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_section_parameters] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_comments,
  },
  [2] = {
    [1] = alias_sym_description_detail,
  },
  [3] = {
    [1] = alias_sym_section_parameters,
  },
  [4] = {
    [2] = alias_sym_description_detail,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '@') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 1:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 2:
      if (eof) ADVANCE(8);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '@') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 3:
      if (eof) ADVANCE(8);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 4:
      if (eof) ADVANCE(8);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '@') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (eof) ADVANCE(8);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == '@') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_section_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_section_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_section_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__slider_info_body);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__slider_info_body);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__slider_info_body);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__slider_path);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__slider_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__slider_path);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 4},
  [6] = {.lex_state = 3, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 5},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 3, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 5},
  [11] = {.lex_state = 3, .external_lex_state = 2},
  [12] = {.lex_state = 5, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 6},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 6},
  [17] = {.lex_state = 0, .external_lex_state = 6},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 6},
  [20] = {.lex_state = 0, .external_lex_state = 6},
  [21] = {.lex_state = 0, .external_lex_state = 6},
  [22] = {.lex_state = 2, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 6},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0, .external_lex_state = 7},
  [44] = {.lex_state = 0, .external_lex_state = 8},
  [45] = {.lex_state = 0, .external_lex_state = 8},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

enum {
  ts_external_token_raw_text = 0,
  ts_external_token_raw_text_single_line = 1,
  ts_external_token_description_field = 2,
  ts_external_token__import_keyword = 3,
  ts_external_token_slider_field = 4,
  ts_external_token_slider_identifier = 5,
  ts_external_token__slider_default = 6,
  ts_external_token__slider_hidden_prefix = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_raw_text_single_line] = sym_raw_text_single_line,
  [ts_external_token_description_field] = sym_description_field,
  [ts_external_token__import_keyword] = sym__import_keyword,
  [ts_external_token_slider_field] = sym_slider_field,
  [ts_external_token_slider_identifier] = sym_slider_identifier,
  [ts_external_token__slider_default] = sym__slider_default,
  [ts_external_token__slider_hidden_prefix] = sym__slider_hidden_prefix,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_raw_text_single_line] = true,
    [ts_external_token_description_field] = true,
    [ts_external_token__import_keyword] = true,
    [ts_external_token_slider_field] = true,
    [ts_external_token_slider_identifier] = true,
    [ts_external_token__slider_default] = true,
    [ts_external_token__slider_hidden_prefix] = true,
  },
  [2] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_description_field] = true,
    [ts_external_token__import_keyword] = true,
    [ts_external_token_slider_field] = true,
  },
  [3] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_description_field] = true,
    [ts_external_token__import_keyword] = true,
    [ts_external_token_slider_field] = true,
    [ts_external_token_slider_identifier] = true,
    [ts_external_token__slider_default] = true,
  },
  [4] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_description_field] = true,
    [ts_external_token__import_keyword] = true,
    [ts_external_token_slider_field] = true,
    [ts_external_token__slider_default] = true,
  },
  [5] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_raw_text_single_line] = true,
    [ts_external_token_description_field] = true,
    [ts_external_token__import_keyword] = true,
    [ts_external_token_slider_field] = true,
    [ts_external_token__slider_hidden_prefix] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_raw_text_single_line] = true,
    [ts_external_token_description_field] = true,
    [ts_external_token__import_keyword] = true,
    [ts_external_token_slider_field] = true,
  },
  [7] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_raw_text_single_line] = true,
  },
  [8] = {
    [ts_external_token_raw_text] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON_SLASH] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_raw_text_single_line] = ACTIONS(1),
    [sym_description_field] = ACTIONS(1),
    [sym__import_keyword] = ACTIONS(1),
    [sym_slider_field] = ACTIONS(1),
    [sym_slider_identifier] = ACTIONS(1),
    [sym__slider_default] = ACTIONS(1),
    [sym__slider_hidden_prefix] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(49),
    [aux_sym__description_section] = STATE(2),
    [sym_code_section] = STATE(39),
    [sym__section_header] = STATE(45),
    [sym_description] = STATE(2),
    [sym_slider_description] = STATE(2),
    [sym_import_description] = STATE(2),
    [aux_sym_program_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_section_name] = ACTIONS(5),
    [sym_raw_text] = ACTIONS(7),
    [sym_description_field] = ACTIONS(9),
    [sym__import_keyword] = ACTIONS(11),
    [sym_slider_field] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      sym_section_name,
    ACTIONS(7), 1,
      sym_raw_text,
    ACTIONS(9), 1,
      sym_description_field,
    ACTIONS(11), 1,
      sym__import_keyword,
    ACTIONS(13), 1,
      sym_slider_field,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym__section_header,
    STATE(41), 2,
      sym_code_section,
      aux_sym_program_repeat1,
    STATE(3), 4,
      aux_sym__description_section,
      sym_description,
      sym_slider_description,
      sym_import_description,
  [32] = 6,
    ACTIONS(19), 1,
      sym_raw_text,
    ACTIONS(22), 1,
      sym_description_field,
    ACTIONS(25), 1,
      sym__import_keyword,
    ACTIONS(28), 1,
      sym_slider_field,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym_section_name,
    STATE(3), 4,
      aux_sym__description_section,
      sym_description,
      sym_slider_description,
      sym_import_description,
  [55] = 5,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      sym_slider_identifier,
    ACTIONS(37), 1,
      sym__slider_default,
    STATE(27), 1,
      sym__slider_info,
    ACTIONS(31), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [76] = 4,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      sym__slider_default,
    STATE(36), 1,
      sym__slider_info,
    ACTIONS(39), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [94] = 4,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_section_name,
    ACTIONS(49), 1,
      sym__slider_path,
    ACTIONS(43), 5,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
  [111] = 3,
    ACTIONS(53), 1,
      sym_raw_text_single_line,
    ACTIONS(55), 1,
      sym__slider_hidden_prefix,
    ACTIONS(51), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [126] = 3,
    ACTIONS(33), 1,
      anon_sym_LT,
    STATE(35), 1,
      sym__slider_info,
    ACTIONS(57), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [141] = 4,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      sym_section_name,
    ACTIONS(65), 1,
      sym__slider_path,
    ACTIONS(59), 5,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
  [158] = 3,
    ACTIONS(69), 1,
      sym_raw_text_single_line,
    ACTIONS(71), 1,
      sym__slider_hidden_prefix,
    ACTIONS(67), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [173] = 4,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      sym_section_name,
    ACTIONS(79), 1,
      sym__slider_path,
    ACTIONS(73), 5,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
  [190] = 4,
    ACTIONS(83), 1,
      anon_sym_GT,
    ACTIONS(85), 1,
      sym_section_name,
    ACTIONS(87), 1,
      sym__slider_info_body,
    ACTIONS(81), 5,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
  [207] = 3,
    ACTIONS(33), 1,
      anon_sym_LT,
    STATE(30), 1,
      sym__slider_info,
    ACTIONS(89), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [222] = 2,
    ACTIONS(93), 1,
      sym_raw_text_single_line,
    ACTIONS(91), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [234] = 2,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(73), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [246] = 2,
    ACTIONS(99), 1,
      sym_raw_text_single_line,
    ACTIONS(97), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [258] = 2,
    ACTIONS(103), 1,
      sym_raw_text_single_line,
    ACTIONS(101), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [270] = 2,
    ACTIONS(107), 1,
      anon_sym_COLON,
    ACTIONS(105), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [282] = 2,
    ACTIONS(109), 1,
      sym_raw_text_single_line,
    ACTIONS(105), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [294] = 2,
    ACTIONS(53), 1,
      sym_raw_text_single_line,
    ACTIONS(51), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [306] = 2,
    ACTIONS(113), 1,
      sym_raw_text_single_line,
    ACTIONS(111), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [318] = 2,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(59), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [330] = 2,
    ACTIONS(115), 1,
      sym_raw_text_single_line,
    ACTIONS(59), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [342] = 2,
    ACTIONS(117), 1,
      anon_sym_GT,
    ACTIONS(67), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [354] = 1,
    ACTIONS(119), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [363] = 1,
    ACTIONS(121), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [372] = 1,
    ACTIONS(89), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [381] = 1,
    ACTIONS(123), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [390] = 1,
    ACTIONS(125), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [399] = 1,
    ACTIONS(39), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [408] = 1,
    ACTIONS(97), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [417] = 1,
    ACTIONS(127), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [426] = 1,
    ACTIONS(129), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [435] = 1,
    ACTIONS(101), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [444] = 1,
    ACTIONS(131), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [453] = 1,
    ACTIONS(57), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [462] = 1,
    ACTIONS(51), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [471] = 1,
    ACTIONS(105), 6,
      sym_raw_text,
      sym_description_field,
      sym__import_keyword,
      sym_slider_field,
      ts_builtin_sym_end,
      sym_section_name,
  [480] = 4,
    ACTIONS(5), 1,
      sym_section_name,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym__section_header,
    STATE(40), 2,
      sym_code_section,
      aux_sym_program_repeat1,
  [494] = 4,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_section_name,
    STATE(45), 1,
      sym__section_header,
    STATE(40), 2,
      sym_code_section,
      aux_sym_program_repeat1,
  [508] = 4,
    ACTIONS(5), 1,
      sym_section_name,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym__section_header,
    STATE(40), 2,
      sym_code_section,
      aux_sym_program_repeat1,
  [522] = 3,
    ACTIONS(140), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      anon_sym_COLON_SLASH,
    STATE(32), 2,
      sym__slider_numeric_right,
      sym__slider_filepath_right,
  [533] = 2,
    ACTIONS(146), 1,
      sym_raw_text_single_line,
    ACTIONS(144), 3,
      sym_raw_text,
      ts_builtin_sym_end,
      sym_section_name,
  [542] = 1,
    ACTIONS(148), 3,
      sym_raw_text,
      ts_builtin_sym_end,
      sym_section_name,
  [548] = 2,
    ACTIONS(152), 1,
      sym_raw_text,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym_section_name,
  [556] = 1,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym_section_name,
  [561] = 1,
    ACTIONS(156), 1,
      anon_sym_COLON,
  [565] = 1,
    ACTIONS(158), 1,
      anon_sym_EQ,
  [569] = 1,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 234,
  [SMALL_STATE(16)] = 246,
  [SMALL_STATE(17)] = 258,
  [SMALL_STATE(18)] = 270,
  [SMALL_STATE(19)] = 282,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 306,
  [SMALL_STATE(22)] = 318,
  [SMALL_STATE(23)] = 330,
  [SMALL_STATE(24)] = 342,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 363,
  [SMALL_STATE(27)] = 372,
  [SMALL_STATE(28)] = 381,
  [SMALL_STATE(29)] = 390,
  [SMALL_STATE(30)] = 399,
  [SMALL_STATE(31)] = 408,
  [SMALL_STATE(32)] = 417,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 435,
  [SMALL_STATE(35)] = 444,
  [SMALL_STATE(36)] = 453,
  [SMALL_STATE(37)] = 462,
  [SMALL_STATE(38)] = 471,
  [SMALL_STATE(39)] = 480,
  [SMALL_STATE(40)] = 494,
  [SMALL_STATE(41)] = 508,
  [SMALL_STATE(42)] = 522,
  [SMALL_STATE(43)] = 533,
  [SMALL_STATE(44)] = 542,
  [SMALL_STATE(45)] = 548,
  [SMALL_STATE(46)] = 556,
  [SMALL_STATE(47)] = 561,
  [SMALL_STATE(48)] = 565,
  [SMALL_STATE(49)] = 569,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_section, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_section, 2), SHIFT_REPEAT(25),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_section, 2), SHIFT_REPEAT(47),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_section, 2), SHIFT_REPEAT(21),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_section, 2), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_numeric_right, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_numeric_right, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_filepath_right, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__slider_filepath_right, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_info, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_numeric_right, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_filepath_right, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__slider_filepath_right, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_info, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_filepath_right, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__slider_filepath_right, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_info, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__slider_info, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_numeric_right, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_filepath_right, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_info, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_filepath_right, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_description, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_section, 1, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, .production_id = 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_filepath_right, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_info, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slider_description, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_description, 2, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slider_numeric_right, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 2, .production_id = 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_section, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_section, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jsfx_external_scanner_create(void);
void tree_sitter_jsfx_external_scanner_destroy(void *);
bool tree_sitter_jsfx_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jsfx_external_scanner_serialize(void *, char *);
void tree_sitter_jsfx_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jsfx(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_jsfx_external_scanner_create,
      tree_sitter_jsfx_external_scanner_destroy,
      tree_sitter_jsfx_external_scanner_scan,
      tree_sitter_jsfx_external_scanner_serialize,
      tree_sitter_jsfx_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
