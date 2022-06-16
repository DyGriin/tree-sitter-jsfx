; highlights.scm
"comments" @comment
(import_description "import" @keyword)
[(slider_field) (description_field)] @keyword

(section_name) @tag
(slider_identifier) @variable.parameter

[":" ":/"] @punctuation.delimiter
(slider_description ["<" ">"] @punctuation.bracket)
(slider_description ["---" "="] @operator)