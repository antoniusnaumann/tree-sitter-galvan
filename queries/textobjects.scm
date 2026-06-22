; Functions and closures.
(function
  (body) @function.inside) @function.around

(closure
  body: (_) @function.inside) @function.around

; Tests.
(test
  (body) @test.inside) @test.around

; Type declarations.
[
  (struct)
  (tuple_struct)
  (enum)
  (alias)
  (empty_struct)
] @class.around

; Parameters and call arguments.
[
  (param)
  (closure_argument)
  (function_call_arg)
  (constructor_call_arg)
  (enum_constructor_arg)
] @parameter.inside @parameter.around

; Entry-like elements.
[
  (struct_field)
  (tuple_field)
  (enum_variant)
  (dict_element)
] @entry.inside @entry.around

; Consecutive line comments form one surrounding comment object.
(comment) @comment.inside
(comment)+ @comment.around
