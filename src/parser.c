#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  sym_param = 2,
  sym_annotation = 3,
  sym_statement = 4,
  sym_colon = 5,
  sym__semicolon = 6,
  sym_dot = 7,
  sym_question_mark = 8,
  sym_exclamation_mark = 9,
  sym_paren_open = 10,
  sym_paren_close = 11,
  sym_bracket_open = 12,
  sym_bracket_close = 13,
  sym_brace_open = 14,
  sym_brace_close = 15,
  sym_single_arrow = 16,
  sym_double_arrow = 17,
  sym_plus = 18,
  sym_minus = 19,
  sym_multiply = 20,
  sym_divide = 21,
  sym_remainder = 22,
  sym_power = 23,
  sym_assign = 24,
  sym_add_assign = 25,
  sym_sub_assign = 26,
  sym_mul_assign = 27,
  sym_pow_assign = 28,
  sym_div_assign = 29,
  sym_rem_assign = 30,
  sym_equal = 31,
  sym_not_equal = 32,
  sym_greater = 33,
  sym_greater_equal = 34,
  sym_less = 35,
  sym_less_equal = 36,
  sym_identical = 37,
  sym_not_identical = 38,
  sym_and = 39,
  sym_or = 40,
  sym_xor = 41,
  sym_not = 42,
  sym_concat = 43,
  sym_remove = 44,
  sym_contains = 45,
  sym_main_keyword = 46,
  sym_build_keyword = 47,
  sym_test_keyword = 48,
  sym_fn_keyword = 49,
  sym_type_keyword = 50,
  sym_ref_keyword = 51,
  sym_let_keyword = 52,
  sym_mut_keyword = 53,
  sym_true_keyword = 54,
  sym_false_keyword = 55,
  sym_none_keyword = 56,
  sym_async_keyword = 57,
  sym_const_keyword = 58,
  sym_pub_keyword = 59,
  sym_else_keyword = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_string_literal_token1 = 62,
  sym_raw_string_literal = 63,
  sym_number_literal = 64,
  sym__ident = 65,
  sym__type_ident = 66,
  sym__newline = 67,
  sym__comment = 68,
  sym_source = 69,
  sym_body = 70,
  sym__toplevel = 71,
  sym_main = 72,
  sym_build = 73,
  sym_test = 74,
  sym_entry_point = 75,
  sym_function = 76,
  sym_fn_signature = 77,
  sym__fn_modifiers = 78,
  sym_param_list = 79,
  sym_return_type = 80,
  sym_type_declaration = 81,
  sym__type_prelude = 82,
  sym_struct = 83,
  sym_struct_field = 84,
  sym_alias = 85,
  sym_tuple_struct = 86,
  sym_tuple_field = 87,
  sym_empty_struct = 88,
  sym_type_item = 89,
  sym_result_type = 90,
  sym_optional_type = 91,
  sym_set_type = 92,
  sym_array_type = 93,
  sym_dict_type = 94,
  sym_ordered_dict_type = 95,
  sym_tuple_type = 96,
  sym_basic_type = 97,
  sym_comma = 98,
  sym_visibility = 99,
  sym_string_literal = 100,
  sym_ident = 101,
  sym_type_ident = 102,
  aux_sym_source_repeat1 = 103,
  aux_sym_body_repeat1 = 104,
  aux_sym_body_repeat2 = 105,
  aux_sym_function_repeat1 = 106,
  aux_sym_param_list_repeat1 = 107,
  aux_sym_struct_repeat1 = 108,
  aux_sym_struct_repeat2 = 109,
  aux_sym_tuple_struct_repeat1 = 110,
  aux_sym_tuple_type_repeat1 = 111,
  aux_sym_string_literal_repeat1 = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_raw_string_literal] = "raw_string_literal",
  [sym_number_literal] = "number_literal",
  [sym__ident] = "_ident",
  [sym__type_ident] = "_type_ident",
  [sym__newline] = "_newline",
  [sym__comment] = "_comment",
  [sym_source] = "source",
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
  [sym_type_declaration] = "type_declaration",
  [sym__type_prelude] = "_type_prelude",
  [sym_struct] = "struct",
  [sym_struct_field] = "struct_field",
  [sym_alias] = "alias",
  [sym_tuple_struct] = "tuple_struct",
  [sym_tuple_field] = "tuple_field",
  [sym_empty_struct] = "empty_struct",
  [sym_type_item] = "type_item",
  [sym_result_type] = "result_type",
  [sym_optional_type] = "optional_type",
  [sym_set_type] = "set_type",
  [sym_array_type] = "array_type",
  [sym_dict_type] = "dict_type",
  [sym_ordered_dict_type] = "ordered_dict_type",
  [sym_tuple_type] = "tuple_type",
  [sym_basic_type] = "basic_type",
  [sym_comma] = "comma",
  [sym_visibility] = "visibility",
  [sym_string_literal] = "string_literal",
  [sym_ident] = "ident",
  [sym_type_ident] = "type_ident",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_struct_repeat2] = "struct_repeat2",
  [aux_sym_tuple_struct_repeat1] = "tuple_struct_repeat1",
  [aux_sym_tuple_type_repeat1] = "tuple_type_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [sym_number_literal] = sym_number_literal,
  [sym__ident] = sym__ident,
  [sym__type_ident] = sym__type_ident,
  [sym__newline] = sym__newline,
  [sym__comment] = sym__comment,
  [sym_source] = sym_source,
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
  [sym_type_declaration] = sym_type_declaration,
  [sym__type_prelude] = sym__type_prelude,
  [sym_struct] = sym_struct,
  [sym_struct_field] = sym_struct_field,
  [sym_alias] = sym_alias,
  [sym_tuple_struct] = sym_tuple_struct,
  [sym_tuple_field] = sym_tuple_field,
  [sym_empty_struct] = sym_empty_struct,
  [sym_type_item] = sym_type_item,
  [sym_result_type] = sym_result_type,
  [sym_optional_type] = sym_optional_type,
  [sym_set_type] = sym_set_type,
  [sym_array_type] = sym_array_type,
  [sym_dict_type] = sym_dict_type,
  [sym_ordered_dict_type] = sym_ordered_dict_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_basic_type] = sym_basic_type,
  [sym_comma] = sym_comma,
  [sym_visibility] = sym_visibility,
  [sym_string_literal] = sym_string_literal,
  [sym_ident] = sym_ident,
  [sym_type_ident] = sym_type_ident,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_body_repeat2] = aux_sym_body_repeat2,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym_struct_repeat2] = aux_sym_struct_repeat2,
  [aux_sym_tuple_struct_repeat1] = aux_sym_tuple_struct_repeat1,
  [aux_sym_tuple_type_repeat1] = aux_sym_tuple_type_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_source] = {
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
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type_prelude] = {
    .visible = false,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_field] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_type_item] = {
    .visible = true,
    .named = true,
  },
  [sym_result_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_set_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_type] = {
    .visible = true,
    .named = true,
  },
  [sym_ordered_dict_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
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
  [sym_type_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
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
  [aux_sym_struct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_struct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_repeat1] = {
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
  [7] = 4,
  [8] = 4,
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
  [23] = 4,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 32,
  [33] = 28,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 30,
  [40] = 34,
  [41] = 41,
  [42] = 42,
  [43] = 38,
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 13,
  [74] = 74,
  [75] = 15,
  [76] = 10,
  [77] = 77,
  [78] = 54,
  [79] = 12,
  [80] = 14,
  [81] = 21,
  [82] = 16,
  [83] = 20,
  [84] = 74,
  [85] = 22,
  [86] = 19,
  [87] = 17,
  [88] = 18,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 104,
  [114] = 108,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 121,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 125,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(192);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == '^') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'b') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(172);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == 8594) ADVANCE(77);
      if (lookahead == 8658) ADVANCE(78);
      if (lookahead == 8712 ||
          lookahead == 8714) ADVANCE(111);
      if (lookahead == 8800) ADVANCE(94);
      if (lookahead == 8801) ADVANCE(100);
      if (lookahead == 8802) ADVANCE(101);
      if (lookahead == 8804) ADVANCE(99);
      if (lookahead == 8805) ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('d' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == '}') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '/') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(136);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(199);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == '}') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(137);
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(137);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == '6') ADVANCE(137);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(137);
      END_STATE();
    case 21:
      if (lookahead == '8') ADVANCE(137);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'z') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == '|') ADVANCE(104);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(142);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == 8594) ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_param);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_statement);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_statement);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_question_mark);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_exclamation_mark);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_exclamation_mark);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_paren_open);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_paren_close);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_bracket_open);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_bracket_close);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_brace_open);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_brace_close);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_single_arrow);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_double_arrow);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_plus);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == '=') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_minus);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(77);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_multiply);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_remainder);
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_power);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '^') ADVANCE(106);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_assign);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_add_assign);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_sub_assign);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_mul_assign);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_pow_assign);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_div_assign);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_rem_assign);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_equal);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_not_equal);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_greater);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_greater_equal);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_less);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_less_equal);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identical);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_not_identical);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_concat);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_remove);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_contains);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_contains);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_main_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_build_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_test_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_fn_keyword);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_fn_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_type_keyword);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_type_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ref_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_let_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_mut_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_true_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_false_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_none_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_async_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_pub_keyword);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_pub_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_else_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '/') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(199);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'b') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'c') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 'y') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'y') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'f') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'p') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'y') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'D') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'D') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__type_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 58},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 58},
  [45] = {.lex_state = 58},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 58},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 58},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 58},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 58},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 58},
  [57] = {.lex_state = 58},
  [58] = {.lex_state = 58},
  [59] = {.lex_state = 58},
  [60] = {.lex_state = 58},
  [61] = {.lex_state = 58},
  [62] = {.lex_state = 58},
  [63] = {.lex_state = 58},
  [64] = {.lex_state = 58},
  [65] = {.lex_state = 58},
  [66] = {.lex_state = 58},
  [67] = {.lex_state = 58},
  [68] = {.lex_state = 58},
  [69] = {.lex_state = 58},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 58},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 58},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 58},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 58},
  [104] = {.lex_state = 58},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 58},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 58},
  [113] = {.lex_state = 58},
  [114] = {.lex_state = 58},
  [115] = {.lex_state = 58},
  [116] = {.lex_state = 58},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 58},
  [119] = {.lex_state = 58},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 58},
  [122] = {.lex_state = 58},
  [123] = {.lex_state = 58},
  [124] = {.lex_state = 58},
  [125] = {.lex_state = 58},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 58},
  [128] = {.lex_state = 58},
  [129] = {.lex_state = 58},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 58},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 58},
  [136] = {.lex_state = 58},
  [137] = {.lex_state = 58},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 58},
  [143] = {.lex_state = 58},
  [144] = {.lex_state = 58},
  [145] = {.lex_state = 58},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 58},
  [149] = {.lex_state = 58},
  [150] = {.lex_state = 58},
  [151] = {.lex_state = 58},
  [152] = {.lex_state = 58},
  [153] = {.lex_state = 58},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 58},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 58},
  [159] = {.lex_state = 58},
  [160] = {.lex_state = 58},
  [161] = {.lex_state = 58},
  [162] = {.lex_state = 58},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 58},
  [165] = {.lex_state = 58},
  [166] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [sym__type_ident] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(162),
    [sym__toplevel] = STATE(3),
    [sym_main] = STATE(3),
    [sym_build] = STATE(3),
    [sym_test] = STATE(3),
    [sym_entry_point] = STATE(3),
    [sym_function] = STATE(3),
    [sym_fn_signature] = STATE(150),
    [sym__fn_modifiers] = STATE(157),
    [sym_type_declaration] = STATE(3),
    [sym__type_prelude] = STATE(44),
    [sym_struct] = STATE(68),
    [sym_alias] = STATE(68),
    [sym_tuple_struct] = STATE(68),
    [sym_empty_struct] = STATE(68),
    [sym_visibility] = STATE(154),
    [sym_ident] = STATE(153),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_function_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_annotation] = ACTIONS(7),
    [sym_main_keyword] = ACTIONS(9),
    [sym_build_keyword] = ACTIONS(11),
    [sym_test_keyword] = ACTIONS(13),
    [sym_fn_keyword] = ACTIONS(15),
    [sym_type_keyword] = ACTIONS(17),
    [sym_pub_keyword] = ACTIONS(19),
    [sym__ident] = ACTIONS(21),
    [sym__comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_annotation,
    ACTIONS(28), 1,
      sym_main_keyword,
    ACTIONS(31), 1,
      sym_build_keyword,
    ACTIONS(34), 1,
      sym_test_keyword,
    ACTIONS(37), 1,
      sym_fn_keyword,
    ACTIONS(40), 1,
      sym_type_keyword,
    ACTIONS(43), 1,
      sym_pub_keyword,
    ACTIONS(46), 1,
      sym__ident,
    STATE(44), 1,
      sym__type_prelude,
    STATE(71), 1,
      aux_sym_function_repeat1,
    STATE(150), 1,
      sym_fn_signature,
    STATE(153), 1,
      sym_ident,
    STATE(154), 1,
      sym_visibility,
    STATE(157), 1,
      sym__fn_modifiers,
    STATE(68), 4,
      sym_struct,
      sym_alias,
      sym_tuple_struct,
      sym_empty_struct,
    STATE(2), 8,
      sym__toplevel,
      sym_main,
      sym_build,
      sym_test,
      sym_entry_point,
      sym_function,
      sym_type_declaration,
      aux_sym_source_repeat1,
  [65] = 18,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      sym_annotation,
    ACTIONS(9), 1,
      sym_main_keyword,
    ACTIONS(11), 1,
      sym_build_keyword,
    ACTIONS(13), 1,
      sym_test_keyword,
    ACTIONS(15), 1,
      sym_fn_keyword,
    ACTIONS(17), 1,
      sym_type_keyword,
    ACTIONS(19), 1,
      sym_pub_keyword,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym__type_prelude,
    STATE(71), 1,
      aux_sym_function_repeat1,
    STATE(150), 1,
      sym_fn_signature,
    STATE(153), 1,
      sym_ident,
    STATE(154), 1,
      sym_visibility,
    STATE(157), 1,
      sym__fn_modifiers,
    STATE(68), 4,
      sym_struct,
      sym_alias,
      sym_tuple_struct,
      sym_empty_struct,
    STATE(2), 8,
      sym__toplevel,
      sym_main,
      sym_build,
      sym_test,
      sym_entry_point,
      sym_function,
      sym_type_declaration,
      aux_sym_source_repeat1,
  [130] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(61), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(21), 1,
      sym_type_item,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      sym_annotation,
      sym_question_mark,
      sym_exclamation_mark,
    ACTIONS(59), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [177] = 15,
    ACTIONS(19), 1,
      sym_pub_keyword,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      sym_paren_open,
    ACTIONS(67), 1,
      sym_paren_close,
    ACTIONS(69), 1,
      sym_bracket_open,
    ACTIONS(71), 1,
      sym_brace_open,
    ACTIONS(73), 1,
      sym__type_ident,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      sym__comment,
    STATE(41), 1,
      sym_visibility,
    STATE(54), 1,
      aux_sym_struct_repeat1,
    STATE(87), 1,
      sym_type_ident,
    STATE(96), 1,
      sym_type_item,
    STATE(120), 1,
      sym_tuple_field,
    STATE(73), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [230] = 15,
    ACTIONS(19), 1,
      sym_pub_keyword,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      sym_paren_open,
    ACTIONS(69), 1,
      sym_bracket_open,
    ACTIONS(71), 1,
      sym_brace_open,
    ACTIONS(73), 1,
      sym__type_ident,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(79), 1,
      sym_paren_close,
    STATE(41), 1,
      sym_visibility,
    STATE(54), 1,
      aux_sym_struct_repeat1,
    STATE(87), 1,
      sym_type_ident,
    STATE(96), 1,
      sym_type_item,
    STATE(120), 1,
      sym_tuple_field,
    STATE(73), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [283] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(21), 1,
      sym_type_item,
    ACTIONS(51), 7,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_close,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [324] = 10,
    ACTIONS(51), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym_paren_open,
    ACTIONS(69), 1,
      sym_bracket_open,
    ACTIONS(71), 1,
      sym_brace_open,
    ACTIONS(73), 1,
      sym__type_ident,
    ACTIONS(77), 1,
      sym__comment,
    STATE(81), 1,
      sym_type_item,
    STATE(87), 1,
      sym_type_ident,
    ACTIONS(59), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
    STATE(73), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [366] = 14,
    ACTIONS(19), 1,
      sym_pub_keyword,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      sym_paren_open,
    ACTIONS(69), 1,
      sym_bracket_open,
    ACTIONS(71), 1,
      sym_brace_open,
    ACTIONS(73), 1,
      sym__type_ident,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(77), 1,
      sym__comment,
    STATE(41), 1,
      sym_visibility,
    STATE(54), 1,
      aux_sym_struct_repeat1,
    STATE(87), 1,
      sym_type_ident,
    STATE(96), 1,
      sym_type_item,
    STATE(120), 1,
      sym_tuple_field,
    STATE(73), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [416] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(85), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(83), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_open,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
      sym_assign,
  [443] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(87), 1,
      sym_paren_open,
    ACTIONS(89), 1,
      sym_paren_close,
    ACTIONS(91), 1,
      sym_bracket_open,
    ACTIONS(93), 1,
      sym_brace_open,
    ACTIONS(95), 1,
      sym_pub_keyword,
    ACTIONS(97), 1,
      sym__type_ident,
    STATE(41), 1,
      sym_visibility,
    STATE(87), 1,
      sym_type_ident,
    STATE(96), 1,
      sym_type_item,
    STATE(97), 1,
      sym_tuple_field,
    STATE(73), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [487] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(101), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(99), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [512] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(105), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [537] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(109), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [562] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(113), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(111), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [587] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(117), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(115), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [612] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(121), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [637] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(125), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(123), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [662] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(129), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(127), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [687] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(133), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(131), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [712] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(137), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(135), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [737] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(141), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(139), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_annotation,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [762] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(21), 1,
      sym_type_item,
    ACTIONS(51), 3,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_open,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [796] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    ACTIONS(143), 1,
      sym_paren_close,
    STATE(17), 1,
      sym_type_ident,
    STATE(112), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [831] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    ACTIONS(145), 1,
      sym_paren_close,
    STATE(17), 1,
      sym_type_ident,
    STATE(112), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [866] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    ACTIONS(147), 1,
      sym_paren_close,
    STATE(17), 1,
      sym_type_ident,
    STATE(112), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [901] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    ACTIONS(149), 1,
      sym_paren_close,
    STATE(17), 1,
      sym_type_ident,
    STATE(112), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [936] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(115), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [968] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(121), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1000] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(125), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1032] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(124), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1064] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(87), 1,
      sym_paren_open,
    ACTIONS(91), 1,
      sym_bracket_open,
    ACTIONS(93), 1,
      sym_brace_open,
    ACTIONS(97), 1,
      sym__type_ident,
    STATE(87), 1,
      sym_type_ident,
    STATE(102), 1,
      sym_type_item,
    STATE(73), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1096] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(116), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1128] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(104), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1160] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(87), 1,
      sym_paren_open,
    ACTIONS(91), 1,
      sym_bracket_open,
    ACTIONS(93), 1,
      sym_brace_open,
    ACTIONS(97), 1,
      sym__type_ident,
    STATE(87), 1,
      sym_type_ident,
    STATE(100), 1,
      sym_type_item,
    STATE(73), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1192] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(123), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1224] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(47), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1256] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(84), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1288] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(129), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1320] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(113), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1352] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(87), 1,
      sym_paren_open,
    ACTIONS(91), 1,
      sym_bracket_open,
    ACTIONS(93), 1,
      sym_brace_open,
    ACTIONS(97), 1,
      sym__type_ident,
    STATE(87), 1,
      sym_type_ident,
    STATE(95), 1,
      sym_type_item,
    STATE(73), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1384] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(112), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1416] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(74), 1,
      sym_type_item,
    STATE(13), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1448] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(153), 1,
      sym_paren_open,
    ACTIONS(155), 1,
      sym_brace_open,
    ACTIONS(157), 1,
      sym_assign,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(159), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1474] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
      sym_brace_open,
      sym_assign,
    ACTIONS(163), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1494] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
      sym_brace_open,
      sym_assign,
    ACTIONS(167), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1514] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(173), 1,
      sym_exclamation_mark,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(175), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1537] = 10,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      sym_brace_close,
    ACTIONS(181), 1,
      sym_pub_keyword,
    ACTIONS(183), 1,
      sym__newline,
    STATE(78), 1,
      aux_sym_struct_repeat1,
    STATE(126), 1,
      sym_struct_field,
    STATE(134), 1,
      sym_visibility,
    STATE(165), 1,
      sym_ident,
  [1568] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(187), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1585] = 10,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      sym_pub_keyword,
    ACTIONS(183), 1,
      sym__newline,
    ACTIONS(189), 1,
      sym_brace_close,
    STATE(78), 1,
      aux_sym_struct_repeat1,
    STATE(126), 1,
      sym_struct_field,
    STATE(134), 1,
      sym_visibility,
    STATE(165), 1,
      sym_ident,
  [1616] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(193), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1633] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(197), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1650] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(201), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1667] = 5,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      sym__newline,
    STATE(54), 1,
      aux_sym_struct_repeat1,
    ACTIONS(206), 6,
      sym_paren_open,
      sym_paren_close,
      sym_bracket_open,
      sym_brace_open,
      sym_pub_keyword,
      sym__type_ident,
  [1688] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(213), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1705] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(217), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1722] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(221), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1739] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(225), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1756] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(229), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1773] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(233), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1790] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(237), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1807] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(241), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1824] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(245), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1841] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(249), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1858] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(253), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1875] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(257), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1892] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(261), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1909] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(265), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1926] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(269), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1943] = 9,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      sym_pub_keyword,
    ACTIONS(183), 1,
      sym__newline,
    STATE(78), 1,
      aux_sym_struct_repeat1,
    STATE(126), 1,
      sym_struct_field,
    STATE(134), 1,
      sym_visibility,
    STATE(165), 1,
      sym_ident,
  [1971] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(95), 1,
      sym_pub_keyword,
    ACTIONS(271), 1,
      sym_annotation,
    ACTIONS(273), 1,
      sym_fn_keyword,
    STATE(110), 1,
      aux_sym_function_repeat1,
    STATE(145), 1,
      sym_fn_signature,
    STATE(157), 2,
      sym__fn_modifiers,
      sym_visibility,
  [1994] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(181), 1,
      sym_pub_keyword,
    ACTIONS(275), 1,
      sym_brace_close,
    STATE(90), 1,
      sym_struct_field,
    STATE(134), 1,
      sym_visibility,
    STATE(165), 1,
      sym_ident,
  [2016] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(105), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2030] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(281), 1,
      sym_paren_close,
    STATE(24), 1,
      sym_comma,
    STATE(108), 1,
      aux_sym_tuple_type_repeat1,
  [2052] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(113), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2066] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(83), 1,
      sym__newline,
    ACTIONS(85), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2080] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(283), 6,
      sym_paren_open,
      sym_bracket_open,
      sym_brace_open,
      sym_fn_keyword,
      sym_type_keyword,
      sym__type_ident,
  [2092] = 5,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      sym__newline,
    STATE(78), 1,
      aux_sym_struct_repeat1,
    ACTIONS(206), 3,
      sym_brace_close,
      sym_pub_keyword,
      sym__ident,
  [2110] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(99), 1,
      sym__newline,
    ACTIONS(101), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2124] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(107), 1,
      sym__newline,
    ACTIONS(109), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2138] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(135), 1,
      sym__newline,
    ACTIONS(137), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2152] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(117), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2166] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(131), 1,
      sym__newline,
    ACTIONS(133), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2180] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(291), 1,
      sym_paren_close,
    STATE(25), 1,
      sym_comma,
    STATE(114), 1,
      aux_sym_tuple_type_repeat1,
  [2202] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(139), 1,
      sym__newline,
    ACTIONS(141), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2216] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(127), 1,
      sym__newline,
    ACTIONS(129), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2230] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(119), 1,
      sym__newline,
    ACTIONS(121), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2244] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(123), 1,
      sym__newline,
    ACTIONS(125), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2258] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(293), 5,
      sym_paren_open,
      sym_paren_close,
      sym_bracket_open,
      sym_brace_open,
      sym__type_ident,
  [2269] = 6,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      sym_brace_close,
    ACTIONS(299), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym_struct_repeat1,
    STATE(93), 1,
      aux_sym_struct_repeat2,
  [2288] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(301), 1,
      sym_brace_open,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      sym_raw_string_literal,
    STATE(60), 1,
      sym_body,
    STATE(149), 1,
      sym_string_literal,
  [2307] = 5,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(309), 1,
      sym__semicolon,
    ACTIONS(312), 1,
      sym__newline,
    STATE(92), 1,
      aux_sym_body_repeat1,
    ACTIONS(307), 2,
      sym_statement,
      sym_brace_close,
  [2324] = 6,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(179), 1,
      sym_brace_close,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      sym__newline,
    STATE(50), 1,
      aux_sym_struct_repeat1,
    STATE(98), 1,
      aux_sym_struct_repeat2,
  [2343] = 5,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(321), 1,
      sym__semicolon,
    ACTIONS(323), 1,
      sym__newline,
    STATE(92), 1,
      aux_sym_body_repeat1,
    ACTIONS(319), 2,
      sym_statement,
      sym_brace_close,
  [2360] = 5,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(327), 1,
      sym_question_mark,
    ACTIONS(329), 1,
      sym_exclamation_mark,
    ACTIONS(331), 1,
      sym__newline,
    ACTIONS(325), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2377] = 5,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(327), 1,
      sym_question_mark,
    ACTIONS(329), 1,
      sym_exclamation_mark,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2394] = 6,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      sym_paren_close,
    ACTIONS(341), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_struct_repeat1,
    STATE(101), 1,
      aux_sym_tuple_struct_repeat1,
  [2413] = 6,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      sym_brace_close,
    ACTIONS(348), 1,
      sym__newline,
    STATE(70), 1,
      aux_sym_struct_repeat1,
    STATE(98), 1,
      aux_sym_struct_repeat2,
  [2432] = 6,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      sym_paren_close,
    ACTIONS(356), 1,
      sym__newline,
    STATE(9), 1,
      aux_sym_struct_repeat1,
    STATE(99), 1,
      aux_sym_tuple_struct_repeat1,
  [2451] = 5,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(327), 1,
      sym_question_mark,
    ACTIONS(329), 1,
      sym_exclamation_mark,
    ACTIONS(361), 1,
      sym__newline,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [2468] = 6,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(79), 1,
      sym_paren_close,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym_struct_repeat1,
    STATE(99), 1,
      aux_sym_tuple_struct_repeat1,
  [2487] = 5,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(327), 1,
      sym_question_mark,
    ACTIONS(329), 1,
      sym_exclamation_mark,
    ACTIONS(369), 1,
      sym__newline,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [2504] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      sym_paren_close,
    STATE(42), 1,
      sym_comma,
    STATE(103), 1,
      aux_sym_tuple_type_repeat1,
  [2520] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(376), 1,
      sym_colon,
    ACTIONS(378), 1,
      sym_bracket_close,
  [2536] = 5,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(380), 1,
      sym__semicolon,
    ACTIONS(382), 1,
      sym_brace_close,
    ACTIONS(384), 1,
      sym__newline,
    STATE(94), 1,
      aux_sym_body_repeat1,
  [2552] = 4,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(388), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [2566] = 5,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(380), 1,
      sym__semicolon,
    ACTIONS(384), 1,
      sym__newline,
    ACTIONS(390), 1,
      sym_brace_close,
    STATE(94), 1,
      aux_sym_body_repeat1,
  [2582] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(143), 1,
      sym_paren_close,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_comma,
    STATE(103), 1,
      aux_sym_tuple_type_repeat1,
  [2598] = 4,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(394), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [2612] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(397), 1,
      sym_annotation,
    STATE(110), 1,
      aux_sym_function_repeat1,
    ACTIONS(400), 2,
      sym_fn_keyword,
      sym_pub_keyword,
  [2626] = 4,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(404), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [2640] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2654] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(406), 1,
      sym_colon,
    ACTIONS(408), 1,
      sym_bracket_close,
  [2670] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(145), 1,
      sym_paren_close,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      sym_comma,
    STATE(103), 1,
      aux_sym_tuple_type_repeat1,
  [2686] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(410), 1,
      sym_colon,
    ACTIONS(412), 1,
      sym_brace_close,
  [2702] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(416), 1,
      sym_brace_close,
  [2718] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(418), 1,
      sym_statement,
    ACTIONS(420), 1,
      sym_brace_close,
    STATE(131), 1,
      aux_sym_body_repeat2,
  [2731] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(422), 1,
      sym_brace_open,
    ACTIONS(424), 1,
      sym_single_arrow,
    STATE(156), 1,
      sym_return_type,
  [2744] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      sym_paren_close,
    STATE(119), 1,
      aux_sym_param_list_repeat1,
  [2757] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(431), 1,
      sym__newline,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2768] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(433), 1,
      sym_bracket_close,
  [2781] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(424), 1,
      sym_single_arrow,
    ACTIONS(435), 1,
      sym_brace_open,
    STATE(161), 1,
      sym_return_type,
  [2794] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(437), 1,
      sym_exclamation_mark,
    ACTIONS(439), 1,
      sym_brace_open,
  [2807] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(441), 1,
      sym_bracket_close,
  [2820] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(443), 1,
      sym_brace_close,
  [2833] = 3,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(445), 1,
      sym__newline,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [2844] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      sym_paren_close,
    STATE(128), 1,
      aux_sym_param_list_repeat1,
  [2857] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      sym_paren_close,
    STATE(119), 1,
      aux_sym_param_list_repeat1,
  [2870] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 1,
      sym_question_mark,
    ACTIONS(279), 1,
      sym_exclamation_mark,
    ACTIONS(455), 1,
      sym_brace_close,
  [2883] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(457), 1,
      sym_statement,
    ACTIONS(460), 1,
      sym_brace_close,
    STATE(130), 1,
      aux_sym_body_repeat2,
  [2896] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(462), 1,
      sym_statement,
    ACTIONS(464), 1,
      sym_brace_close,
    STATE(130), 1,
      aux_sym_body_repeat2,
  [2909] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(466), 3,
      sym_colon,
      sym_paren_open,
      sym_brace_open,
  [2918] = 4,
    ACTIONS(77), 1,
      sym__comment,
    ACTIONS(380), 1,
      sym__semicolon,
    ACTIONS(384), 1,
      sym__newline,
    STATE(94), 1,
      aux_sym_body_repeat1,
  [2931] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(468), 1,
      sym__ident,
    STATE(158), 1,
      sym_ident,
  [2941] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(470), 2,
      sym_brace_open,
      sym_single_arrow,
  [2949] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(472), 1,
      sym_paren_open,
    STATE(122), 1,
      sym_param_list,
  [2959] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(301), 1,
      sym_brace_open,
    STATE(57), 1,
      sym_body,
  [2969] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(453), 1,
      sym_paren_close,
    ACTIONS(474), 1,
      sym_param,
  [2979] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(476), 1,
      sym_param,
    ACTIONS(478), 1,
      sym_paren_close,
  [2989] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(468), 1,
      sym__ident,
    STATE(148), 1,
      sym_ident,
  [2999] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(45), 1,
      sym_type_ident,
  [3009] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(480), 2,
      sym_brace_open,
      sym_single_arrow,
  [3017] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(482), 2,
      sym_brace_open,
      sym_single_arrow,
  [3025] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(301), 1,
      sym_brace_open,
    STATE(56), 1,
      sym_body,
  [3035] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(301), 1,
      sym_brace_open,
    STATE(62), 1,
      sym_body,
  [3045] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(81), 1,
      sym__type_ident,
    STATE(46), 1,
      sym_type_ident,
  [3055] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(468), 1,
      sym__ident,
    STATE(136), 1,
      sym_ident,
  [3065] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(472), 1,
      sym_paren_open,
    STATE(118), 1,
      sym_param_list,
  [3075] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(301), 1,
      sym_brace_open,
    STATE(59), 1,
      sym_body,
  [3085] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(301), 1,
      sym_brace_open,
    STATE(64), 1,
      sym_body,
  [3095] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [3103] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(484), 2,
      sym_brace_open,
      sym_single_arrow,
  [3111] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(301), 1,
      sym_brace_open,
    STATE(52), 1,
      sym_body,
  [3121] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(486), 1,
      sym_fn_keyword,
    ACTIONS(488), 1,
      sym_type_keyword,
  [3131] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(474), 1,
      sym_param,
    ACTIONS(490), 1,
      sym_paren_close,
  [3141] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(435), 1,
      sym_brace_open,
  [3148] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(492), 1,
      sym_fn_keyword,
  [3155] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(494), 1,
      sym_colon,
  [3162] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(496), 1,
      sym_brace_open,
  [3169] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(498), 1,
      sym_brace_open,
  [3176] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(500), 1,
      sym_brace_open,
  [3183] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
  [3190] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(474), 1,
      sym_param,
  [3197] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(504), 1,
      sym_brace_open,
  [3204] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(506), 1,
      sym_colon,
  [3211] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(283), 1,
      sym__ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 230,
  [SMALL_STATE(7)] = 283,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 416,
  [SMALL_STATE(11)] = 443,
  [SMALL_STATE(12)] = 487,
  [SMALL_STATE(13)] = 512,
  [SMALL_STATE(14)] = 537,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 587,
  [SMALL_STATE(17)] = 612,
  [SMALL_STATE(18)] = 637,
  [SMALL_STATE(19)] = 662,
  [SMALL_STATE(20)] = 687,
  [SMALL_STATE(21)] = 712,
  [SMALL_STATE(22)] = 737,
  [SMALL_STATE(23)] = 762,
  [SMALL_STATE(24)] = 796,
  [SMALL_STATE(25)] = 831,
  [SMALL_STATE(26)] = 866,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 936,
  [SMALL_STATE(29)] = 968,
  [SMALL_STATE(30)] = 1000,
  [SMALL_STATE(31)] = 1032,
  [SMALL_STATE(32)] = 1064,
  [SMALL_STATE(33)] = 1096,
  [SMALL_STATE(34)] = 1128,
  [SMALL_STATE(35)] = 1160,
  [SMALL_STATE(36)] = 1192,
  [SMALL_STATE(37)] = 1224,
  [SMALL_STATE(38)] = 1256,
  [SMALL_STATE(39)] = 1288,
  [SMALL_STATE(40)] = 1320,
  [SMALL_STATE(41)] = 1352,
  [SMALL_STATE(42)] = 1384,
  [SMALL_STATE(43)] = 1416,
  [SMALL_STATE(44)] = 1448,
  [SMALL_STATE(45)] = 1474,
  [SMALL_STATE(46)] = 1494,
  [SMALL_STATE(47)] = 1514,
  [SMALL_STATE(48)] = 1537,
  [SMALL_STATE(49)] = 1568,
  [SMALL_STATE(50)] = 1585,
  [SMALL_STATE(51)] = 1616,
  [SMALL_STATE(52)] = 1633,
  [SMALL_STATE(53)] = 1650,
  [SMALL_STATE(54)] = 1667,
  [SMALL_STATE(55)] = 1688,
  [SMALL_STATE(56)] = 1705,
  [SMALL_STATE(57)] = 1722,
  [SMALL_STATE(58)] = 1739,
  [SMALL_STATE(59)] = 1756,
  [SMALL_STATE(60)] = 1773,
  [SMALL_STATE(61)] = 1790,
  [SMALL_STATE(62)] = 1807,
  [SMALL_STATE(63)] = 1824,
  [SMALL_STATE(64)] = 1841,
  [SMALL_STATE(65)] = 1858,
  [SMALL_STATE(66)] = 1875,
  [SMALL_STATE(67)] = 1892,
  [SMALL_STATE(68)] = 1909,
  [SMALL_STATE(69)] = 1926,
  [SMALL_STATE(70)] = 1943,
  [SMALL_STATE(71)] = 1971,
  [SMALL_STATE(72)] = 1994,
  [SMALL_STATE(73)] = 2016,
  [SMALL_STATE(74)] = 2030,
  [SMALL_STATE(75)] = 2052,
  [SMALL_STATE(76)] = 2066,
  [SMALL_STATE(77)] = 2080,
  [SMALL_STATE(78)] = 2092,
  [SMALL_STATE(79)] = 2110,
  [SMALL_STATE(80)] = 2124,
  [SMALL_STATE(81)] = 2138,
  [SMALL_STATE(82)] = 2152,
  [SMALL_STATE(83)] = 2166,
  [SMALL_STATE(84)] = 2180,
  [SMALL_STATE(85)] = 2202,
  [SMALL_STATE(86)] = 2216,
  [SMALL_STATE(87)] = 2230,
  [SMALL_STATE(88)] = 2244,
  [SMALL_STATE(89)] = 2258,
  [SMALL_STATE(90)] = 2269,
  [SMALL_STATE(91)] = 2288,
  [SMALL_STATE(92)] = 2307,
  [SMALL_STATE(93)] = 2324,
  [SMALL_STATE(94)] = 2343,
  [SMALL_STATE(95)] = 2360,
  [SMALL_STATE(96)] = 2377,
  [SMALL_STATE(97)] = 2394,
  [SMALL_STATE(98)] = 2413,
  [SMALL_STATE(99)] = 2432,
  [SMALL_STATE(100)] = 2451,
  [SMALL_STATE(101)] = 2468,
  [SMALL_STATE(102)] = 2487,
  [SMALL_STATE(103)] = 2504,
  [SMALL_STATE(104)] = 2520,
  [SMALL_STATE(105)] = 2536,
  [SMALL_STATE(106)] = 2552,
  [SMALL_STATE(107)] = 2566,
  [SMALL_STATE(108)] = 2582,
  [SMALL_STATE(109)] = 2598,
  [SMALL_STATE(110)] = 2612,
  [SMALL_STATE(111)] = 2626,
  [SMALL_STATE(112)] = 2640,
  [SMALL_STATE(113)] = 2654,
  [SMALL_STATE(114)] = 2670,
  [SMALL_STATE(115)] = 2686,
  [SMALL_STATE(116)] = 2702,
  [SMALL_STATE(117)] = 2718,
  [SMALL_STATE(118)] = 2731,
  [SMALL_STATE(119)] = 2744,
  [SMALL_STATE(120)] = 2757,
  [SMALL_STATE(121)] = 2768,
  [SMALL_STATE(122)] = 2781,
  [SMALL_STATE(123)] = 2794,
  [SMALL_STATE(124)] = 2807,
  [SMALL_STATE(125)] = 2820,
  [SMALL_STATE(126)] = 2833,
  [SMALL_STATE(127)] = 2844,
  [SMALL_STATE(128)] = 2857,
  [SMALL_STATE(129)] = 2870,
  [SMALL_STATE(130)] = 2883,
  [SMALL_STATE(131)] = 2896,
  [SMALL_STATE(132)] = 2909,
  [SMALL_STATE(133)] = 2918,
  [SMALL_STATE(134)] = 2931,
  [SMALL_STATE(135)] = 2941,
  [SMALL_STATE(136)] = 2949,
  [SMALL_STATE(137)] = 2959,
  [SMALL_STATE(138)] = 2969,
  [SMALL_STATE(139)] = 2979,
  [SMALL_STATE(140)] = 2989,
  [SMALL_STATE(141)] = 2999,
  [SMALL_STATE(142)] = 3009,
  [SMALL_STATE(143)] = 3017,
  [SMALL_STATE(144)] = 3025,
  [SMALL_STATE(145)] = 3035,
  [SMALL_STATE(146)] = 3045,
  [SMALL_STATE(147)] = 3055,
  [SMALL_STATE(148)] = 3065,
  [SMALL_STATE(149)] = 3075,
  [SMALL_STATE(150)] = 3085,
  [SMALL_STATE(151)] = 3095,
  [SMALL_STATE(152)] = 3103,
  [SMALL_STATE(153)] = 3111,
  [SMALL_STATE(154)] = 3121,
  [SMALL_STATE(155)] = 3131,
  [SMALL_STATE(156)] = 3141,
  [SMALL_STATE(157)] = 3148,
  [SMALL_STATE(158)] = 3155,
  [SMALL_STATE(159)] = 3162,
  [SMALL_STATE(160)] = 3169,
  [SMALL_STATE(161)] = 3176,
  [SMALL_STATE(162)] = 3183,
  [SMALL_STATE(163)] = 3190,
  [SMALL_STATE(164)] = 3197,
  [SMALL_STATE(165)] = 3204,
  [SMALL_STATE(166)] = 3211,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(71),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(144),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(137),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(91),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(140),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(141),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(77),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(132),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_type, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_type, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ident, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ident, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_dict_type, 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_dict_type, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_item, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_item, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_type, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_type, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_type, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_type, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_type, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_type, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_struct, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_struct, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_prelude, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_prelude, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_prelude, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_prelude, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_point, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_point, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 3),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(54),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(54),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 6),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 6),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(78),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(78),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(92),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(92),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat2, 2), SHIFT_REPEAT(70),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_repeat2, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat2, 2), SHIFT_REPEAT(70),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_struct_repeat1, 2), SHIFT_REPEAT(9),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_struct_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_struct_repeat1, 2), SHIFT_REPEAT(9),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2), SHIFT_REPEAT(89),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(109),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(110),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(163),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_struct_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat2, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(133),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn_modifiers, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 5),
  [502] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
