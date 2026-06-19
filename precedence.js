const expression_precedence = {
  closure: -3,
  trailing_closure: -2,
  group: -1,
  infix: 2,
  postfix: 3,
  member: 4,
  statement: 10,
};

const infix_precedence = {
  member: 30,
  custom: 25,
  exponent: 20,
  multiply: 19,
  addition: 18,
  shift: 17,
  bitand: 16,
  bitxor: 15,
  bitor: 14,
  concat: 12,
  range: 11,
  contains: 10,
  comparison: 9,
  and: 8,
  xor: 7,
  or: 6,
};

module.exports = { expression_precedence, infix_precedence };
