const { infix_precedence } = require('../precedence');
const precedence = infix_precedence;

const infix = {
  _infix_expression: $ => choice(
    $.member_expression,
    $.logical_expression,
    $.arithmetic_expression,
    $.collection_expression,
    $.comparison_expression,
    $.custom_infix_expression,
  ),

  logical_expression: $ => choice(
    operation($, precedence.and, $.and),
    operation($, precedence.or, $.or),
    operation($, precedence.xor, $.xor),
  ),

  arithmetic_expression: $ => choice(
    operation($, precedence.addition, $.plus),
    operation($, precedence.addition, $.minus),
    operation($, precedence.multiply, $.multiply),
    operation($, precedence.multiply, $.divide),
    operation($, precedence.multiply, $.remainder),
    operation($, precedence.exponent, $.power),
  ),

  collection_expression: $ => choice(
    operation($, precedence.concat, $.concat),
    operation($, precedence.concat, $.remove),
    operation($, precedence.contains, $.contains),
  ),

  member_expression: $ => choice(
    operation($, precedence.member, $.member_call_operator),
    operation($, precedence.member, $.safe_call_operator),
  ),

  member_call_operator: $ => ".",
  safe_call_operator: $ => token("?."),


  // Chaining comparison expression requires parentheses
  // This will be handled in AST conversion
  comparison_expression: $ => operation($, precedence.comparison, $._comparison_operator),

  custom_infix_expression: $ => operation($, precedence.custom, $.custom_infix_operator),
  custom_infix_operator: $ => "$$$",
};

function operation($, precedence, operator) {
  return prec.left(precedence, seq(
    field('lhs', $.expression),
    field('operator', operator),
    field('rhs', $.expression),
  ));
}

module.exports = { infix };
