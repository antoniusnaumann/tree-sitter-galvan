const symbols = {
  // Punctuation
  colon: $ => ':',
  double_colon: $ => '::',
  _semicolon: $ => ';',
  _comma: $ => ',',
  dot: $ => '.',
  question_mark: $ => '?',
  exclamation_mark: $ => '!',

  // Braces
  paren_open: $ => '(',
  paren_close: $ => ')',

  bracket_open: $ => '[',
  bracket_close: $ => ']',

  brace_open: $ => '{',
  brace_close: $ => '}',

  pipe: $ => '|',

  // Arrows
  single_arrow: $ => token(choice("->", "→")),
  double_arrow: $ => token(choice("=>", "⇒")),

  // Operators
  // Individual arithmetic operator rules as named rules
  plus: $ => '+',
  minus: $ => '-',
  multiply: $ => '*',
  divide: $ => '/',
  remainder: $ => '%',
  power: $ => '^',

  unwrap: $ => '?',

  // Assignment
  _assignment_operator: $ => choice(
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
  _comparison_operator: $ => choice(
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

  and: $ => token(choice('and', '&&')),
  or: $ => token(choice('or', '||')),
  xor: $ => token(choice('xor', '^^')),
  not: $ => token(choice('not', '!')),

  concat: $ => '++',
  remove: $ => '--',
  contains: $ => token(choice('in', '∈', '∊')),
};

module.exports = { symbols };
