export const symbols = {
  // Punctuation
  colon: $ => /:/,
  _semicolon: $ => /;/,
  comma: $ => seq(
    ',',
    optional(repeat($._newline))
  ),
  dot: $ => /./,
  question_mark: $ => /?/,
  exclamation_mark: $ => /!/,

  // Braces
  paren_open: $ => seq(
    '(',
    optional(repeat($._newline))
  ),
  paren_close: $ => seq(
    optional(repeat($._newline)),
    ')',
  ),

  bracket_open: $ => seq(
    '[',
    optional(repeat($._newline))
  ),
  bracket_close: $ => seq(
    optional(repeat($._newline)),
    ']',
  ),

  brace_open: $ => seq(
    '{',
    optional(repeat($._newline))
  ),
  brace_close: $ => seq(
    optional(repeat($._newline)),
    '}',
  ),

  // Arrows
  single_arrow: $ => token(choice("->", "→")),
  double_arrow: $ => token(choice("=>", "⇒")),

  // Operators
  // custom_infix

  // Arithmetic
  arithmetic_operator: $ => choice(
    $.plus,
    $.minus,
    $.multiply,
    $.divide,
    $.remainder,
    $.power
  ),

  // Individual arithmetic operator rules as named rules
  plus: $ => '+',
  minus: $ => '-',
  multiply: $ => '*',
  divide: $ => '/',
  remainder: $ => '%',
  power: $ => '^',

  // Assignment
  assignment_operator: $ => choice(
    $.assign,
    $.add_assign,
    $.sub_assign,
    $.mul_assign,
    $.pow_assign,
    $.div_assign,
    $.rem_assign
  ),

  assign: $ => '=',
  add_assign: $ => '+=',
  sub_assign: $ => '-=',
  mul_assign: $ => '*=',
  pow_assign: $ => '^=',
  div_assign: $ => '/=',
  rem_assign: $ => '%=',

  // Comparison
  comparison_operator: $ => choice(
    $.equal,
    $.not_equal,
    $.greater,
    $.greater_equal,
    $.less,
    $.less_equal,
    $.identical,
    $.not_identical
  ),

  equal: $ => '==',
  not_equal: $ => token(choice('!=', '≠')),
  greater: $ => '>',
  greater_equal: $ => token(choice('>=', '≥')),
  less: $ => '<',
  less_equal: $ => token(choice('<=', '≤')),
  identical: $ => token(choice('===', '≡')),
  not_identical: $ => token(choice('!==', '≢')),

  logical_infix_operator: $ => choice($.and, $.or, $.xor),

  and: $ => token(choice('and', '&&')),
  or: $ => token(choice('or', '||')),
  xor: $ => token(choice('xor', '^^')),
  not: $ => token(choice('not', '!')),

  collection_operator: $ => choice(
    $.concat,
    $.remove,
    $.contains
  ),

  concat: $ => '++',
  remove: $ => '--',
  contains: $ => token(choice('in', '∈', '∊')),

}
