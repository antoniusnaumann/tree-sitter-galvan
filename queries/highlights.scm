; keywords
[
  (main_keyword)
  (build_keyword)
  (test_keyword)
] @keyword

[
  (async_keyword)
  (const_keyword)
  (pub_keyword)
] @keyword

[
  (fn_keyword)
  (type_keyword)
] @keyword

(declaration_modifier) @keyword

(else_keyword) @keyword

; "return" @keyword.return
; "throw" @keyword.exception

; ;literals
(boolean_literal) @constant.builtin
(none_keyword) @constant.builtin

(number_literal) @number
(string_literal) @string

; identifier
(type_ident) @type

; punctuation
(paren_open) @punctuation.bracket
(paren_close) @punctuation.bracket
(bracket_open) @punctuation.bracket
(bracket_close) @punctuation.bracket
(brace_open) @punctuation.bracket
(brace_close) @punctuation.bracket

(colon) @punctuation.delimiter
(member_call_operator) @punctuation.delimiter
(safe_call_operator) @punctuation.delimiter
; "," @punctuation.delimiter
; ";" @punctuation.delimiter

; "^//.*" @comment

; pseudo-keywords from builtin functions
((free_function
  (ident) @keyword)
  (#match? @keyword "^(if|assert|print|println|try)$")
)
