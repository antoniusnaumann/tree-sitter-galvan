; highlighting rules follow the neovim standard highlight groups: https://neovim.io/doc/user/treesitter.html#treesitter-highlight

; function definitions
(fn_signature
  (ident) @function
)

[
 ; logical
 (and)
 (or)
 (xor)
 ; TODO: add this in once const keyword is used somewhere
 ; (not)

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

 ; assignments
 (assign)
 (add_assign)
 (sub_assign)
 (mul_assign)
 (pow_assign)
 (div_assign)
 (rem_assign)
 
] @operator

; keywords
[
  (main_keyword)
  (build_keyword)
  (test_keyword)
] @keyword.function

[
  ; TODO: add this in once const keyword is used somewhere
  ; (const_keyword)
  (pub_keyword)
] @keyword.modifier

; TODO: add this in once async keyword is used somewhere
; (const_keyword)
; (async_keyword) @keyword.coroutine


(fn_keyword) @keyword.function
(type_keyword) @keyword.type

; do not highlight those as "modifiers"
(declaration_modifier) @keyword

(else_keyword) @keyword.conditional

; ;literals
(none_keyword) @constant.builtin
(boolean_literal) @constant.builtin.boolean
(number_literal) @constant.numeric
(string_literal) @string

((free_function
  (ident) @keyword.exception)
  (#match? @keyword.exception "^(panic|throw)$")
)

((free_function
  (ident) @keyword.control.return)
  (#match? @keyword.control.return "^(return)$")
)

((trailing_closure_expression
 (ident) @keyword.control.conditional)
 (#match? @keyword.control.conditional "^(if|try)$")
)

((trailing_closure_expression
 (ident) @keyword.control.repeat)
 (#match? @keyword.control.repeat "^(for|loop|while)$")
)

; highlight 'self' and 'it'.
(
   (ident) @variable.parameter.builtin
   (#match? @variable.parameter.builtin "^(self|it)$")
)

; pseudo-keywords from builtin functions
((free_function
  (ident) @function.builtin)
  (#match? @function.builtin "^(assert|print|println)$")
)

; function calls
((free_function
  (ident) @function.call)
)

((function_call
  (ident) @function.call)
)

(enum_access (
  (type_ident) @type.enum
  (double_colon) @punctuation.delimiter
  (type_ident) @type.enum.variant
))

; identifier
(type_ident) @type
(ident) @variable

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
(pipe) @punctuation.delimiter
; "^//.*" @comment

(trailing_closure_expression
   (ident) @function.call)


(constructor_call
  (type_ident) @constructor)


((member_expression
  rhs: (expression
  (function_call
    (ident) @method.call)))
)

((member_expression
  rhs: (expression
  (trailing_closure_expression
    (ident) @method.call)))
)

((member_expression
  rhs: (expression
    (ident) @variable.member))
)

((closure_argument
   (ident) @variable.parameter.closure)
)

((param
  (ident) @variable.parameter)
)


; TODO: once implicit closure parameters are implemented, replace the rule above with this one:
;(
;   (ident) @variable.parameter.builtin
;   (#match? @variable.parameter.builtin "^(self|it)$")
;)

; operators
(yeet_operator) @keyword.exception

(comment) @comment
