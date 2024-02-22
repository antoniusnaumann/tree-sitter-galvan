const _space = $ => token(seq(/[ \t]/, repeat(/[ \t]*/)));
const _newline = $ => token(seq(optional('\r'), '\n'));
const _comment = $ => token(seq('//', /[^\n]*[ \t]*/));


module.exports = { _space, _newline, _comment };
