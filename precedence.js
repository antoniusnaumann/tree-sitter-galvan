const expression_precedence = {
  closure: 50,
  postfix: 40,
  member: 30,
};

const operator_precedence = {
  postfix: 40,
}

module.exports = { expression_precedence, operator_precedence };
