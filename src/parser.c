#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_type_decl = 1,
  anon_sym_COMMA = 2,
  sym_param = 3,
  sym_annotation = 4,
  sym_statement = 5,
  sym_colon = 6,
  sym__semicolon = 7,
  sym_dot = 8,
  sym_question_mark = 9,
  sym_exclamation_mark = 10,
  sym_paren_open = 11,
  sym_paren_close = 12,
  sym_bracket_open = 13,
  sym_bracket_close = 14,
  sym_brace_open = 15,
  sym_brace_close = 16,
  sym_single_arrow = 17,
  sym_double_arrow = 18,
  sym_plus = 19,
  sym_minus = 20,
  sym_multiply = 21,
  sym_divide = 22,
  sym_remainder = 23,
  sym_power = 24,
  sym_assign = 25,
  sym_add_assign = 26,
  sym_sub_assign = 27,
  sym_mul_assign = 28,
  sym_pow_assign = 29,
  sym_div_assign = 30,
  sym_rem_assign = 31,
  sym_equal = 32,
  sym_not_equal = 33,
  sym_greater = 34,
  sym_greater_equal = 35,
  sym_less = 36,
  sym_less_equal = 37,
  sym_identical = 38,
  sym_not_identical = 39,
  sym_and = 40,
  sym_or = 41,
  sym_xor = 42,
  sym_not = 43,
  sym_concat = 44,
  sym_remove = 45,
  sym_contains = 46,
  sym_main_keyword = 47,
  sym_build_keyword = 48,
  sym_test_keyword = 49,
  sym_fn_keyword = 50,
  sym_type_keyword = 51,
  sym_ref_keyword = 52,
  sym_let_keyword = 53,
  sym_mut_keyword = 54,
  sym_true_keyword = 55,
  sym_false_keyword = 56,
  sym_none_keyword = 57,
  sym_async_keyword = 58,
  sym_const_keyword = 59,
  sym_pub_keyword = 60,
  sym_else_keyword = 61,
  sym_type_item = 62,
  anon_sym_DQUOTE = 63,
  aux_sym_string_literal_token1 = 64,
  sym_raw_string_literal = 65,
  sym_number_literal = 66,
  sym__ident = 67,
  sym__type_ident = 68,
  sym__newline = 69,
  sym__comment = 70,
  sym_source_file = 71,
  sym_body = 72,
  sym__toplevel = 73,
  sym_main = 74,
  sym_build = 75,
  sym_test = 76,
  sym_entry_point = 77,
  sym_function = 78,
  sym_fn_signature = 79,
  sym__fn_modifiers = 80,
  sym_param_list = 81,
  sym_return_type = 82,
  sym_visibility = 83,
  sym_string_literal = 84,
  sym_ident = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_body_repeat1 = 87,
  aux_sym_body_repeat2 = 88,
  aux_sym_function_repeat1 = 89,
  aux_sym_param_list_repeat1 = 90,
  aux_sym_string_literal_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_type_decl] = "type_decl",
  [anon_sym_COMMA] = ",",
  [sym_param] = "param",
  [sym_annotation] = "annotation",
  [sym_statement] = "statement",
  [sym_colon] = "colon",
  [sym__semicolon] = "_semicolon",
  [sym_dot] = "dot",
  [sym_question_mark] = "question_mark",
  [sym_exclamation_mark] = "exclamation_mark",
  [sym_paren_open] = "paren_open",
  [sym_paren_close] = "paren_close",
  [sym_bracket_open] = "bracket_open",
  [sym_bracket_close] = "bracket_close",
  [sym_brace_open] = "brace_open",
  [sym_brace_close] = "brace_close",
  [sym_single_arrow] = "single_arrow",
  [sym_double_arrow] = "double_arrow",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym_multiply] = "multiply",
  [sym_divide] = "divide",
  [sym_remainder] = "remainder",
  [sym_power] = "power",
  [sym_assign] = "assign",
  [sym_add_assign] = "add_assign",
  [sym_sub_assign] = "sub_assign",
  [sym_mul_assign] = "mul_assign",
  [sym_pow_assign] = "pow_assign",
  [sym_div_assign] = "div_assign",
  [sym_rem_assign] = "rem_assign",
  [sym_equal] = "equal",
  [sym_not_equal] = "not_equal",
  [sym_greater] = "greater",
  [sym_greater_equal] = "greater_equal",
  [sym_less] = "less",
  [sym_less_equal] = "less_equal",
  [sym_identical] = "identical",
  [sym_not_identical] = "not_identical",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_xor] = "xor",
  [sym_not] = "not",
  [sym_concat] = "concat",
  [sym_remove] = "remove",
  [sym_contains] = "contains",
  [sym_main_keyword] = "main_keyword",
  [sym_build_keyword] = "build_keyword",
  [sym_test_keyword] = "test_keyword",
  [sym_fn_keyword] = "fn_keyword",
  [sym_type_keyword] = "type_keyword",
  [sym_ref_keyword] = "ref_keyword",
  [sym_let_keyword] = "let_keyword",
  [sym_mut_keyword] = "mut_keyword",
  [sym_true_keyword] = "true_keyword",
  [sym_false_keyword] = "false_keyword",
  [sym_none_keyword] = "none_keyword",
  [sym_async_keyword] = "async_keyword",
  [sym_const_keyword] = "const_keyword",
  [sym_pub_keyword] = "pub_keyword",
  [sym_else_keyword] = "else_keyword",
  [sym_type_item] = "type_item",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_raw_string_literal] = "raw_string_literal",
  [sym_number_literal] = "number_literal",
  [sym__ident] = "_ident",
  [sym__type_ident] = "_type_ident",
  [sym__newline] = "_newline",
  [sym__comment] = "_comment",
  [sym_source_file] = "source_file",
  [sym_body] = "body",
  [sym__toplevel] = "_toplevel",
  [sym_main] = "main",
  [sym_build] = "build",
  [sym_test] = "test",
  [sym_entry_point] = "entry_point",
  [sym_function] = "function",
  [sym_fn_signature] = "fn_signature",
  [sym__fn_modifiers] = "_fn_modifiers",
  [sym_param_list] = "param_list",
  [sym_return_type] = "return_type",
  [sym_visibility] = "visibility",
  [sym_string_literal] = "string_literal",
  [sym_ident] = "ident",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_type_decl] = sym_type_decl,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_param] = sym_param,
  [sym_annotation] = sym_annotation,
  [sym_statement] = sym_statement,
  [sym_colon] = sym_colon,
  [sym__semicolon] = sym__semicolon,
  [sym_dot] = sym_dot,
  [sym_question_mark] = sym_question_mark,
  [sym_exclamation_mark] = sym_exclamation_mark,
  [sym_paren_open] = sym_paren_open,
  [sym_paren_close] = sym_paren_close,
  [sym_bracket_open] = sym_bracket_open,
  [sym_bracket_close] = sym_bracket_close,
  [sym_brace_open] = sym_brace_open,
  [sym_brace_close] = sym_brace_close,
  [sym_single_arrow] = sym_single_arrow,
  [sym_double_arrow] = sym_double_arrow,
  [sym_plus] = sym_plus,
  [sym_minus] = sym_minus,
  [sym_multiply] = sym_multiply,
  [sym_divide] = sym_divide,
  [sym_remainder] = sym_remainder,
  [sym_power] = sym_power,
  [sym_assign] = sym_assign,
  [sym_add_assign] = sym_add_assign,
  [sym_sub_assign] = sym_sub_assign,
  [sym_mul_assign] = sym_mul_assign,
  [sym_pow_assign] = sym_pow_assign,
  [sym_div_assign] = sym_div_assign,
  [sym_rem_assign] = sym_rem_assign,
  [sym_equal] = sym_equal,
  [sym_not_equal] = sym_not_equal,
  [sym_greater] = sym_greater,
  [sym_greater_equal] = sym_greater_equal,
  [sym_less] = sym_less,
  [sym_less_equal] = sym_less_equal,
  [sym_identical] = sym_identical,
  [sym_not_identical] = sym_not_identical,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_xor] = sym_xor,
  [sym_not] = sym_not,
  [sym_concat] = sym_concat,
  [sym_remove] = sym_remove,
  [sym_contains] = sym_contains,
  [sym_main_keyword] = sym_main_keyword,
  [sym_build_keyword] = sym_build_keyword,
  [sym_test_keyword] = sym_test_keyword,
  [sym_fn_keyword] = sym_fn_keyword,
  [sym_type_keyword] = sym_type_keyword,
  [sym_ref_keyword] = sym_ref_keyword,
  [sym_let_keyword] = sym_let_keyword,
  [sym_mut_keyword] = sym_mut_keyword,
  [sym_true_keyword] = sym_true_keyword,
  [sym_false_keyword] = sym_false_keyword,
  [sym_none_keyword] = sym_none_keyword,
  [sym_async_keyword] = sym_async_keyword,
  [sym_const_keyword] = sym_const_keyword,
  [sym_pub_keyword] = sym_pub_keyword,
  [sym_else_keyword] = sym_else_keyword,
  [sym_type_item] = sym_type_item,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [sym_number_literal] = sym_number_literal,
  [sym__ident] = sym__ident,
  [sym__type_ident] = sym__type_ident,
  [sym__newline] = sym__newline,
  [sym__comment] = sym__comment,
  [sym_source_file] = sym_source_file,
  [sym_body] = sym_body,
  [sym__toplevel] = sym__toplevel,
  [sym_main] = sym_main,
  [sym_build] = sym_build,
  [sym_test] = sym_test,
  [sym_entry_point] = sym_entry_point,
  [sym_function] = sym_function,
  [sym_fn_signature] = sym_fn_signature,
  [sym__fn_modifiers] = sym__fn_modifiers,
  [sym_param_list] = sym_param_list,
  [sym_return_type] = sym_return_type,
  [sym_visibility] = sym_visibility,
  [sym_string_literal] = sym_string_literal,
  [sym_ident] = sym_ident,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_body_repeat2] = aux_sym_body_repeat2,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_type_decl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym__semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_question_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_exclamation_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_open] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_close] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_open] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_close] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_open] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_close] = {
    .visible = true,
    .named = true,
  },
  [sym_single_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_double_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_multiply] = {
    .visible = true,
    .named = true,
  },
  [sym_divide] = {
    .visible = true,
    .named = true,
  },
  [sym_remainder] = {
    .visible = true,
    .named = true,
  },
  [sym_power] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_add_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_mul_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_pow_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_div_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_rem_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_greater] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_less] = {
    .visible = true,
    .named = true,
  },
  [sym_less_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_identical] = {
    .visible = true,
    .named = true,
  },
  [sym_not_identical] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_xor] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_concat] = {
    .visible = true,
    .named = true,
  },
  [sym_remove] = {
    .visible = true,
    .named = true,
  },
  [sym_contains] = {
    .visible = true,
    .named = true,
  },
  [sym_main_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_build_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_test_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_let_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_mut_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_true_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_false_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_none_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_async_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_const_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_pub_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_else_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type_item] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [sym__type_ident] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel] = {
    .visible = false,
    .named = true,
  },
  [sym_main] = {
    .visible = true,
    .named = true,
  },
  [sym_build] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_entry_point] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_signature] = {
    .visible = true,
    .named = true,
  },
  [sym__fn_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '?') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(198);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'x') ADVANCE(180);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == 8594) ADVANCE(86);
      if (lookahead == 8658) ADVANCE(87);
      if (lookahead == 8712 ||
          lookahead == 8714) ADVANCE(119);
      if (lookahead == 8800) ADVANCE(102);
      if (lookahead == 8801) ADVANCE(108);
      if (lookahead == 8802) ADVANCE(109);
      if (lookahead == 8804) ADVANCE(107);
      if (lookahead == 8805) ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('d' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '/') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(144);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(110);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == '8') ADVANCE(145);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(145);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == '6') ADVANCE(145);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(145);
      END_STATE();
    case 19:
      if (lookahead == '8') ADVANCE(145);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'z') ADVANCE(40);
      END_STATE();
    case 65:
      if (lookahead == '|') ADVANCE(112);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == 8594) ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_type_decl);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_param);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_statement);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_statement);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_question_mark);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_exclamation_mark);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_paren_open);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_paren_close);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_bracket_open);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_bracket_close);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_brace_open);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_brace_close);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_single_arrow);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_double_arrow);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_plus);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == '=') ADVANCE(95);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_minus);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(86);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_multiply);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_remainder);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_power);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '^') ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_assign);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_add_assign);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_sub_assign);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_mul_assign);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_pow_assign);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_div_assign);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_rem_assign);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_equal);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_not_equal);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_greater);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_greater_equal);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_less);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_less_equal);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identical);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_not_identical);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_concat);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_remove);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_contains);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_contains);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_main_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_build_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_test_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_fn_keyword);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_fn_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_type_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ref_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_let_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_mut_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_true_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_false_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_none_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_async_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_pub_keyword);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_pub_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_else_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_type_item);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '/') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(7);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'b') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'c') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == 'y') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'f') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'p') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'r') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'y') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'D') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__type_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 67},
  [2] = {.lex_state = 67},
  [3] = {.lex_state = 67},
  [4] = {.lex_state = 67},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 67},
  [7] = {.lex_state = 67},
  [8] = {.lex_state = 67},
  [9] = {.lex_state = 67},
  [10] = {.lex_state = 67},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 67},
  [13] = {.lex_state = 67},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 67},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 67},
  [36] = {.lex_state = 67},
  [37] = {.lex_state = 67},
  [38] = {.lex_state = 67},
  [39] = {.lex_state = 67},
  [40] = {.lex_state = 67},
  [41] = {.lex_state = 67},
  [42] = {.lex_state = 67},
  [43] = {.lex_state = 67},
  [44] = {.lex_state = 67},
  [45] = {.lex_state = 67},
  [46] = {.lex_state = 67},
  [47] = {.lex_state = 67},
  [48] = {.lex_state = 67},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 67},
  [51] = {.lex_state = 67},
  [52] = {.lex_state = 67},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 67},
  [55] = {.lex_state = 67},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 67},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 67},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_type_decl] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_param] = ACTIONS(1),
    [sym_annotation] = ACTIONS(1),
    [sym_statement] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym__semicolon] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym_question_mark] = ACTIONS(1),
    [sym_exclamation_mark] = ACTIONS(1),
    [sym_paren_open] = ACTIONS(1),
    [sym_paren_close] = ACTIONS(1),
    [sym_bracket_open] = ACTIONS(1),
    [sym_bracket_close] = ACTIONS(1),
    [sym_brace_open] = ACTIONS(1),
    [sym_brace_close] = ACTIONS(1),
    [sym_single_arrow] = ACTIONS(1),
    [sym_double_arrow] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_multiply] = ACTIONS(1),
    [sym_divide] = ACTIONS(1),
    [sym_remainder] = ACTIONS(1),
    [sym_power] = ACTIONS(1),
    [sym_assign] = ACTIONS(1),
    [sym_add_assign] = ACTIONS(1),
    [sym_sub_assign] = ACTIONS(1),
    [sym_mul_assign] = ACTIONS(1),
    [sym_pow_assign] = ACTIONS(1),
    [sym_div_assign] = ACTIONS(1),
    [sym_rem_assign] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_not_equal] = ACTIONS(1),
    [sym_greater] = ACTIONS(1),
    [sym_greater_equal] = ACTIONS(1),
    [sym_less] = ACTIONS(1),
    [sym_less_equal] = ACTIONS(1),
    [sym_identical] = ACTIONS(1),
    [sym_not_identical] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_xor] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
    [sym_concat] = ACTIONS(1),
    [sym_remove] = ACTIONS(1),
    [sym_contains] = ACTIONS(1),
    [sym_main_keyword] = ACTIONS(1),
    [sym_build_keyword] = ACTIONS(1),
    [sym_test_keyword] = ACTIONS(1),
    [sym_fn_keyword] = ACTIONS(1),
    [sym_type_keyword] = ACTIONS(1),
    [sym_ref_keyword] = ACTIONS(1),
    [sym_let_keyword] = ACTIONS(1),
    [sym_mut_keyword] = ACTIONS(1),
    [sym_true_keyword] = ACTIONS(1),
    [sym_false_keyword] = ACTIONS(1),
    [sym_none_keyword] = ACTIONS(1),
    [sym_async_keyword] = ACTIONS(1),
    [sym_const_keyword] = ACTIONS(1),
    [sym_pub_keyword] = ACTIONS(1),
    [sym_else_keyword] = ACTIONS(1),
    [sym_type_item] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [sym__type_ident] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym__toplevel] = STATE(2),
    [sym_main] = STATE(2),
    [sym_build] = STATE(2),
    [sym_test] = STATE(2),
    [sym_entry_point] = STATE(2),
    [sym_function] = STATE(2),
    [sym_fn_signature] = STATE(39),
    [sym__fn_modifiers] = STATE(53),
    [sym_visibility] = STATE(53),
    [sym_ident] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_type_decl] = ACTIONS(7),
    [sym_annotation] = ACTIONS(9),
    [sym_main_keyword] = ACTIONS(11),
    [sym_build_keyword] = ACTIONS(13),
    [sym_test_keyword] = ACTIONS(15),
    [sym_fn_keyword] = ACTIONS(17),
    [sym_pub_keyword] = ACTIONS(19),
    [sym__ident] = ACTIONS(21),
    [sym__comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_annotation,
    ACTIONS(11), 1,
      sym_main_keyword,
    ACTIONS(13), 1,
      sym_build_keyword,
    ACTIONS(15), 1,
      sym_test_keyword,
    ACTIONS(17), 1,
      sym_fn_keyword,
    ACTIONS(19), 1,
      sym_pub_keyword,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_type_decl,
    STATE(14), 1,
      aux_sym_function_repeat1,
    STATE(35), 1,
      sym_ident,
    STATE(39), 1,
      sym_fn_signature,
    STATE(53), 2,
      sym__fn_modifiers,
      sym_visibility,
    STATE(3), 7,
      sym__toplevel,
      sym_main,
      sym_build,
      sym_test,
      sym_entry_point,
      sym_function,
      aux_sym_source_file_repeat1,
  [53] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_type_decl,
    ACTIONS(32), 1,
      sym_annotation,
    ACTIONS(35), 1,
      sym_main_keyword,
    ACTIONS(38), 1,
      sym_build_keyword,
    ACTIONS(41), 1,
      sym_test_keyword,
    ACTIONS(44), 1,
      sym_fn_keyword,
    ACTIONS(47), 1,
      sym_pub_keyword,
    ACTIONS(50), 1,
      sym__ident,
    STATE(14), 1,
      aux_sym_function_repeat1,
    STATE(35), 1,
      sym_ident,
    STATE(39), 1,
      sym_fn_signature,
    STATE(53), 2,
      sym__fn_modifiers,
      sym_visibility,
    STATE(3), 7,
      sym__toplevel,
      sym_main,
      sym_build,
      sym_test,
      sym_entry_point,
      sym_function,
      aux_sym_source_file_repeat1,
  [106] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      sym_type_decl,
      sym_annotation,
    ACTIONS(55), 6,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_pub_keyword,
      sym__ident,
  [123] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      sym_type_decl,
      sym_annotation,
    ACTIONS(59), 6,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_pub_keyword,
      sym__ident,
  [140] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      sym_type_decl,
      sym_annotation,
    ACTIONS(63), 6,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_pub_keyword,
      sym__ident,
  [157] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_type_decl,
      sym_annotation,
    ACTIONS(67), 6,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_pub_keyword,
      sym__ident,
  [174] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      sym_type_decl,
      sym_annotation,
    ACTIONS(71), 6,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_pub_keyword,
      sym__ident,
  [191] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym_type_decl,
      sym_annotation,
    ACTIONS(75), 6,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_pub_keyword,
      sym__ident,
  [208] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      sym_type_decl,
      sym_annotation,
    ACTIONS(79), 6,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_pub_keyword,
      sym__ident,
  [225] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      sym_type_decl,
      sym_annotation,
    ACTIONS(83), 6,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_pub_keyword,
      sym__ident,
  [242] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      sym_type_decl,
      sym_annotation,
    ACTIONS(87), 6,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_pub_keyword,
      sym__ident,
  [259] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      sym_type_decl,
      sym_annotation,
    ACTIONS(91), 6,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_pub_keyword,
      sym__ident,
  [276] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 1,
      sym_annotation,
    ACTIONS(95), 1,
      sym_fn_keyword,
    ACTIONS(97), 1,
      sym_pub_keyword,
    STATE(23), 1,
      aux_sym_function_repeat1,
    STATE(44), 1,
      sym_fn_signature,
    STATE(53), 2,
      sym__fn_modifiers,
      sym_visibility,
  [299] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(99), 1,
      sym_brace_open,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_raw_string_literal,
    STATE(12), 1,
      sym_body,
    STATE(51), 1,
      sym_string_literal,
  [318] = 5,
    ACTIONS(107), 1,
      sym__semicolon,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(111), 1,
      sym__comment,
    STATE(17), 1,
      aux_sym_body_repeat1,
    ACTIONS(105), 2,
      sym_statement,
      sym_brace_close,
  [335] = 5,
    ACTIONS(111), 1,
      sym__comment,
    ACTIONS(115), 1,
      sym__semicolon,
    ACTIONS(118), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym_body_repeat1,
    ACTIONS(113), 2,
      sym_statement,
      sym_brace_close,
  [352] = 4,
    ACTIONS(111), 1,
      sym__comment,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(123), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [366] = 5,
    ACTIONS(111), 1,
      sym__comment,
    ACTIONS(126), 1,
      sym__semicolon,
    ACTIONS(128), 1,
      sym_brace_close,
    ACTIONS(130), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym_body_repeat1,
  [382] = 4,
    ACTIONS(111), 1,
      sym__comment,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(134), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [396] = 4,
    ACTIONS(111), 1,
      sym__comment,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(138), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [410] = 5,
    ACTIONS(111), 1,
      sym__comment,
    ACTIONS(126), 1,
      sym__semicolon,
    ACTIONS(130), 1,
      sym__newline,
    ACTIONS(140), 1,
      sym_brace_close,
    STATE(16), 1,
      aux_sym_body_repeat1,
  [426] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(142), 1,
      sym_annotation,
    STATE(23), 1,
      aux_sym_function_repeat1,
    ACTIONS(145), 2,
      sym_fn_keyword,
      sym_pub_keyword,
  [440] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(147), 1,
      sym_statement,
    ACTIONS(149), 1,
      sym_brace_close,
    STATE(31), 1,
      aux_sym_body_repeat2,
  [453] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(151), 1,
      sym_brace_open,
    ACTIONS(153), 1,
      sym_single_arrow,
    STATE(57), 1,
      sym_return_type,
  [466] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      sym_paren_close,
    STATE(26), 1,
      aux_sym_param_list_repeat1,
  [479] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      sym_paren_close,
    STATE(26), 1,
      aux_sym_param_list_repeat1,
  [492] = 4,
    ACTIONS(111), 1,
      sym__comment,
    ACTIONS(126), 1,
      sym__semicolon,
    ACTIONS(130), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym_body_repeat1,
  [505] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(153), 1,
      sym_single_arrow,
    ACTIONS(164), 1,
      sym_brace_open,
    STATE(56), 1,
      sym_return_type,
  [518] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      sym_paren_close,
    STATE(27), 1,
      aux_sym_param_list_repeat1,
  [531] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(170), 1,
      sym_statement,
    ACTIONS(173), 1,
      sym_brace_close,
    STATE(31), 1,
      aux_sym_body_repeat2,
  [544] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(175), 1,
      sym_statement,
    ACTIONS(177), 1,
      sym_brace_close,
    STATE(24), 1,
      aux_sym_body_repeat2,
  [557] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(162), 1,
      sym_paren_close,
    ACTIONS(179), 1,
      sym_param,
  [567] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(181), 1,
      sym__ident,
    STATE(37), 1,
      sym_ident,
  [577] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(99), 1,
      sym_brace_open,
    STATE(11), 1,
      sym_body,
  [587] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_param,
    ACTIONS(185), 1,
      sym_paren_close,
  [597] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(187), 1,
      sym_paren_open,
    STATE(29), 1,
      sym_param_list,
  [607] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(189), 2,
      sym_brace_open,
      sym_single_arrow,
  [615] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(99), 1,
      sym_brace_open,
    STATE(13), 1,
      sym_body,
  [625] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(99), 1,
      sym_brace_open,
    STATE(9), 1,
      sym_body,
  [635] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(191), 2,
      sym_paren_open,
      sym_brace_open,
  [643] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(179), 1,
      sym_param,
    ACTIONS(193), 1,
      sym_paren_close,
  [653] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(195), 2,
      sym_brace_open,
      sym_single_arrow,
  [661] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(99), 1,
      sym_brace_open,
    STATE(6), 1,
      sym_body,
  [671] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(197), 2,
      sym_brace_open,
      sym_single_arrow,
  [679] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [687] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(187), 1,
      sym_paren_open,
    STATE(25), 1,
      sym_param_list,
  [697] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(199), 2,
      sym_brace_open,
      sym_single_arrow,
  [705] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(181), 1,
      sym__ident,
    STATE(47), 1,
      sym_ident,
  [715] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(99), 1,
      sym_brace_open,
    STATE(10), 1,
      sym_body,
  [725] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(99), 1,
      sym_brace_open,
    STATE(7), 1,
      sym_body,
  [735] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(201), 1,
      sym_brace_open,
  [742] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(203), 1,
      sym_fn_keyword,
  [749] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(205), 1,
      sym_brace_open,
  [756] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(207), 1,
      sym_brace_open,
  [763] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(209), 1,
      sym_brace_open,
  [770] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(164), 1,
      sym_brace_open,
  [777] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(211), 1,
      sym_type_item,
  [784] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(213), 1,
      sym_fn_keyword,
  [791] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(215), 1,
      sym_brace_open,
  [798] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [805] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(179), 1,
      sym_param,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 191,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 225,
  [SMALL_STATE(12)] = 242,
  [SMALL_STATE(13)] = 259,
  [SMALL_STATE(14)] = 276,
  [SMALL_STATE(15)] = 299,
  [SMALL_STATE(16)] = 318,
  [SMALL_STATE(17)] = 335,
  [SMALL_STATE(18)] = 352,
  [SMALL_STATE(19)] = 366,
  [SMALL_STATE(20)] = 382,
  [SMALL_STATE(21)] = 396,
  [SMALL_STATE(22)] = 410,
  [SMALL_STATE(23)] = 426,
  [SMALL_STATE(24)] = 440,
  [SMALL_STATE(25)] = 453,
  [SMALL_STATE(26)] = 466,
  [SMALL_STATE(27)] = 479,
  [SMALL_STATE(28)] = 492,
  [SMALL_STATE(29)] = 505,
  [SMALL_STATE(30)] = 518,
  [SMALL_STATE(31)] = 531,
  [SMALL_STATE(32)] = 544,
  [SMALL_STATE(33)] = 557,
  [SMALL_STATE(34)] = 567,
  [SMALL_STATE(35)] = 577,
  [SMALL_STATE(36)] = 587,
  [SMALL_STATE(37)] = 597,
  [SMALL_STATE(38)] = 607,
  [SMALL_STATE(39)] = 615,
  [SMALL_STATE(40)] = 625,
  [SMALL_STATE(41)] = 635,
  [SMALL_STATE(42)] = 643,
  [SMALL_STATE(43)] = 653,
  [SMALL_STATE(44)] = 661,
  [SMALL_STATE(45)] = 671,
  [SMALL_STATE(46)] = 679,
  [SMALL_STATE(47)] = 687,
  [SMALL_STATE(48)] = 697,
  [SMALL_STATE(49)] = 705,
  [SMALL_STATE(50)] = 715,
  [SMALL_STATE(51)] = 725,
  [SMALL_STATE(52)] = 735,
  [SMALL_STATE(53)] = 742,
  [SMALL_STATE(54)] = 749,
  [SMALL_STATE(55)] = 756,
  [SMALL_STATE(56)] = 763,
  [SMALL_STATE(57)] = 770,
  [SMALL_STATE(58)] = 777,
  [SMALL_STATE(59)] = 784,
  [SMALL_STATE(60)] = 791,
  [SMALL_STATE(61)] = 798,
  [SMALL_STATE(62)] = 805,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_point, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_point, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(17),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(17),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(18),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(23),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(62),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(28),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Galvan(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
