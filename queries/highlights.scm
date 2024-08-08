; highlighting rules follow the neovim standard highlight groups: https://neovim.io/doc/user/treesitter.html#treesitter-highlight

; keywords
[
  (main_keyword)
  (build_keyword)
  (test_keyword)
] @keyword

[
  (const_keyword)
  (pub_keyword)
] @keyword.modifier

(async_keyword) @keyword.coroutine


(fn_keyword) @keyword.function
(type_keyword) @keyword.type

; do not highlight those as "modifiers"
(declaration_modifier) @keyword

(else_keyword) @keyword.conditional

; "return" @keyword.return
; "throw" @keyword.exception

; ;literals
(none_keyword) @constant.builtin
(boolean_literal) @boolean
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
  (#match? @keyword "^(assert|print|println)$")
)

((trailing_closure_expression
 (ident) @keyword.conditional)
 (#match? @keyword.conditional "^(if|try)$")
)

; highlight 'self'
(
   (ident) @variable.builtin
   (#match? @variable.builtin "self")
)

; operators
[
 ; logical
 (and)
 (or)
 (xor)
 (not)

 ; arithmetic
 (plus)
 (minus)
 (multiply)
 (divide)
 (remainder)
 (power)

 ; collection
 (concat)
 (remove)
 (contains)

 ; comparison
 (equal)
 (not_equal)
 (greater)
 (greater_equal)
 (less)
 (less_equal)
 (identical)
 (not_identical)
] @operator

(comment) @comment
