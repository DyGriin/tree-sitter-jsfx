/// <reference path="./node_modules/tree-sitter-cli/dsl.d.ts" />

module.exports = grammar({
    name: "jsfx",

    externals: $ => [
        $.raw_text,
        $.raw_text_single_line,
        $.description_field,
        $._import_keyword,
        $.slider_field,
        $.slider_identifier,
        $._slider_default,
        $._slider_hidden_prefix,
    ],

    rules: {
        program: $ => seq(
            optional($._description_section),
            repeat($.code_section)
        ),

        _description_section: $ => repeat1(choice(
            alias($.raw_text, "comments"),
            $.description,
            $.import_description,
            $.slider_description
        )),

        code_section: $ => seq(
            $._section_header,
            optional($.raw_text)
        ),

        _section_header: $ => seq(
            $.section_name,
            optional(alias($.raw_text_single_line, $.section_parameters))
        ),

        description: $ => seq(
            $.description_field,
            token.immediate(":"),
            optional(alias($.raw_text_single_line, $.description_detail))
        ),

        slider_description: $ => seq(
            $.slider_field,
            choice(
                $._slider_numeric_right,
                $._slider_filepath_right,
            )
        ),

        _slider_numeric_right: $ => seq(
            token.immediate(":"),
            optional(seq(
                $.slider_identifier,
                token.immediate("=")
            )),
            optional($._slider_default),
            optional($._slider_info),
        ),

        _slider_info: $ => seq(
            "<",
            optional($._slider_info_body),
            optional(seq(
                ">",
                optional(alias($._slider_hidden_prefix, "---")),
                optional(alias($.raw_text_single_line, $.slider_name))
            ))
        ),

        _slider_filepath_right: $ => seq(
            token.immediate(":/"),
            optional($._slider_path),
            optional(seq(
                token.immediate(":"),
                optional($._slider_path),
                optional(seq(
                    token.immediate(":"),
                    optional(alias($.raw_text_single_line, $.slider_name))
                ))
            ))
        ),

        import_description: $ => seq(
            alias($._import_keyword, "import"),
            optional(alias($.raw_text_single_line, $.description_detail))
        ),

        section_name: $ => /@[a-z]+/,
        _slider_info_body: $ => /[^>\r\n]+/,
        _slider_path: $ => /[^:\r\n]+/
    },
})