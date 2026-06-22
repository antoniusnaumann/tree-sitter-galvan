; Executable blocks and brace-delimited type declarations.
[
  (body)
  (struct)
  (enum)
] @indent

; Parenthesized and bracketed lists.
[
  (param_list)
  (function_call)
  (constructor_call)
  (enum_constructor)
  (enum_variant)
  (tuple_struct)
  (group)
  (array_literal)
  (ordered_dict_literal)
  (array_type)
  (ordered_dict_type)
  (tuple_type)
  (parametric_type)
] @indent

; Brace-delimited collection literals.
[
  (set_literal)
  (dict_literal)
  (set_type)
  (dict_type)
] @indent

; Multi-line generic constraints.
(where_clause) @indent

[
  (brace_close)
  (paren_close)
  (bracket_close)
  (angle_bracket_close)
] @outdent
