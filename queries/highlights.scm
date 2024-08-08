; keywords
[
  "main"
  "build"
  "test"
] @keyword

[
  "async"
  "const"
  "pub"
] @keyword

[
  "fn"
  "type"
] @keyword

[
  "ref"
  "let"
  "mut"
] @keyword

[
  "if"
  "else"
  "try"
] @keyword

"return" @keyword.return
"throw" @keyword.exception

;literals
[
  "true"
  "false"
  "none"
] @constant.builtin

(number_literal) @number
(string_literal) @string

; identifier
(type_ident) @type

; punctuation
"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

":" @punctuation.delimiter
"." @punctuation.delimiter
"?." @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter

"^//.*" @comment
