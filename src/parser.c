#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
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
  sym_struct_type = 83,
  sym_struct_field = 84,
  sym_alias_type = 85,
  sym_tuple_type = 86,
  sym_empty_type = 87,
  sym_type_item = 88,
  sym_result_type = 89,
  sym_optional_type = 90,
  sym_set_type = 91,
  sym_array_type = 92,
  sym_dict_type = 93,
  sym_ordered_dict_type = 94,
  sym_basic_type = 95,
  sym_comma = 96,
  sym_visibility = 97,
  sym_string_literal = 98,
  sym_ident = 99,
  sym_type_ident = 100,
  aux_sym_source_repeat1 = 101,
  aux_sym_body_repeat1 = 102,
  aux_sym_body_repeat2 = 103,
  aux_sym_function_repeat1 = 104,
  aux_sym_param_list_repeat1 = 105,
  aux_sym_struct_type_repeat1 = 106,
  aux_sym_struct_type_repeat2 = 107,
  aux_sym_tuple_type_repeat1 = 108,
  aux_sym_string_literal_repeat1 = 109,
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
  [sym_struct_type] = "struct_type",
  [sym_struct_field] = "struct_field",
  [sym_alias_type] = "alias_type",
  [sym_tuple_type] = "tuple_type",
  [sym_empty_type] = "empty_type",
  [sym_type_item] = "type_item",
  [sym_result_type] = "result_type",
  [sym_optional_type] = "optional_type",
  [sym_set_type] = "set_type",
  [sym_array_type] = "array_type",
  [sym_dict_type] = "dict_type",
  [sym_ordered_dict_type] = "ordered_dict_type",
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
  [aux_sym_struct_type_repeat1] = "struct_type_repeat1",
  [aux_sym_struct_type_repeat2] = "struct_type_repeat2",
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
  [sym_struct_type] = sym_struct_type,
  [sym_struct_field] = sym_struct_field,
  [sym_alias_type] = sym_alias_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_empty_type] = sym_empty_type,
  [sym_type_item] = sym_type_item,
  [sym_result_type] = sym_result_type,
  [sym_optional_type] = sym_optional_type,
  [sym_set_type] = sym_set_type,
  [sym_array_type] = sym_array_type,
  [sym_dict_type] = sym_dict_type,
  [sym_ordered_dict_type] = sym_ordered_dict_type,
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
  [aux_sym_struct_type_repeat1] = aux_sym_struct_type_repeat1,
  [aux_sym_struct_type_repeat2] = aux_sym_struct_type_repeat2,
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
  [sym_struct_type] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_type] = {
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
  [aux_sym_struct_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_type_repeat2] = {
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
  [5] = 4,
  [6] = 4,
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
  [19] = 18,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 22,
  [29] = 29,
  [30] = 30,
  [31] = 25,
  [32] = 24,
  [33] = 27,
  [34] = 34,
  [35] = 23,
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
  [59] = 37,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 8,
  [67] = 67,
  [68] = 68,
  [69] = 37,
  [70] = 14,
  [71] = 12,
  [72] = 72,
  [73] = 9,
  [74] = 16,
  [75] = 17,
  [76] = 76,
  [77] = 77,
  [78] = 11,
  [79] = 10,
  [80] = 13,
  [81] = 15,
  [82] = 7,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 87,
  [99] = 97,
  [100] = 91,
  [101] = 101,
  [102] = 102,
  [103] = 101,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
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
  [148] = 130,
  [149] = 149,
  [150] = 150,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '?') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(191);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(73);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == 8594) ADVANCE(76);
      if (lookahead == 8658) ADVANCE(77);
      if (lookahead == 8712 ||
          lookahead == 8714) ADVANCE(110);
      if (lookahead == 8800) ADVANCE(93);
      if (lookahead == 8801) ADVANCE(99);
      if (lookahead == 8802) ADVANCE(100);
      if (lookahead == 8804) ADVANCE(98);
      if (lookahead == 8805) ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('d' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '?') ADVANCE(67);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '?') ADVANCE(67);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '/') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(131);
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
      if (lookahead == '#') ADVANCE(135);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(101);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 't') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == '8') ADVANCE(136);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(136);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == '6') ADVANCE(136);
      END_STATE();
    case 18:
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(136);
      END_STATE();
    case 20:
      if (lookahead == '8') ADVANCE(136);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'z') ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == '|') ADVANCE(103);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '?') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(194);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == 8594) ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_param);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_statement);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_statement);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_question_mark);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_exclamation_mark);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_exclamation_mark);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_paren_open);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_paren_close);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_bracket_open);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_bracket_close);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_brace_open);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_brace_close);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_single_arrow);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_double_arrow);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_plus);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == '=') ADVANCE(86);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_minus);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_multiply);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_remainder);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_power);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '^') ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_assign);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_add_assign);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_sub_assign);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_mul_assign);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_pow_assign);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_div_assign);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_rem_assign);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_equal);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_not_equal);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_greater);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_greater_equal);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_less);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_less_equal);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identical);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_not_identical);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_concat);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_remove);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_contains);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_contains);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_main_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_build_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_test_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_fn_keyword);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_fn_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_type_keyword);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_type_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ref_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_let_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_mut_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_true_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_false_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_none_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_async_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_pub_keyword);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_pub_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_else_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '/') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'b') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'c') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 'y') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'y') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'f') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 's') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'p') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'y') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'D') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'D') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__type_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(197);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 57},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
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
  [37] = {.lex_state = 57},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 57},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 57},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 57},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 57},
  [65] = {.lex_state = 57},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 57},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 57},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 57},
  [96] = {.lex_state = 57},
  [97] = {.lex_state = 57},
  [98] = {.lex_state = 57},
  [99] = {.lex_state = 57},
  [100] = {.lex_state = 57},
  [101] = {.lex_state = 57},
  [102] = {.lex_state = 57},
  [103] = {.lex_state = 57},
  [104] = {.lex_state = 57},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 57},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 57},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 57},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 57},
  [114] = {.lex_state = 57},
  [115] = {.lex_state = 57},
  [116] = {.lex_state = 57},
  [117] = {.lex_state = 57},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 57},
  [120] = {.lex_state = 57},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 57},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 57},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 57},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 57},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 57},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 57},
  [136] = {.lex_state = 57},
  [137] = {.lex_state = 57},
  [138] = {.lex_state = 57},
  [139] = {.lex_state = 57},
  [140] = {.lex_state = 57},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 57},
  [143] = {.lex_state = 57},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 57},
  [146] = {.lex_state = 57},
  [147] = {.lex_state = 57},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 57},
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
    [sym_source] = STATE(141),
    [sym__toplevel] = STATE(3),
    [sym_main] = STATE(3),
    [sym_build] = STATE(3),
    [sym_test] = STATE(3),
    [sym_entry_point] = STATE(3),
    [sym_function] = STATE(3),
    [sym_fn_signature] = STATE(136),
    [sym__fn_modifiers] = STATE(144),
    [sym_type_declaration] = STATE(3),
    [sym__type_prelude] = STATE(39),
    [sym_struct_type] = STATE(45),
    [sym_alias_type] = STATE(45),
    [sym_tuple_type] = STATE(45),
    [sym_empty_type] = STATE(45),
    [sym_visibility] = STATE(127),
    [sym_ident] = STATE(133),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_function_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_annotation] = ACTIONS(7),
    [sym_paren_open] = ACTIONS(9),
    [sym_main_keyword] = ACTIONS(11),
    [sym_build_keyword] = ACTIONS(13),
    [sym_test_keyword] = ACTIONS(15),
    [sym_fn_keyword] = ACTIONS(17),
    [sym_type_keyword] = ACTIONS(19),
    [sym_pub_keyword] = ACTIONS(21),
    [sym__ident] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(30), 1,
      sym_paren_open,
    ACTIONS(33), 1,
      sym_main_keyword,
    ACTIONS(36), 1,
      sym_build_keyword,
    ACTIONS(39), 1,
      sym_test_keyword,
    ACTIONS(42), 1,
      sym_fn_keyword,
    ACTIONS(45), 1,
      sym_type_keyword,
    ACTIONS(48), 1,
      sym_pub_keyword,
    ACTIONS(51), 1,
      sym__ident,
    STATE(39), 1,
      sym__type_prelude,
    STATE(61), 1,
      aux_sym_function_repeat1,
    STATE(127), 1,
      sym_visibility,
    STATE(133), 1,
      sym_ident,
    STATE(136), 1,
      sym_fn_signature,
    STATE(144), 1,
      sym__fn_modifiers,
    STATE(45), 4,
      sym_struct_type,
      sym_alias_type,
      sym_tuple_type,
      sym_empty_type,
    STATE(2), 8,
      sym__toplevel,
      sym_main,
      sym_build,
      sym_test,
      sym_entry_point,
      sym_function,
      sym_type_declaration,
      aux_sym_source_repeat1,
  [68] = 19,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      sym_annotation,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(11), 1,
      sym_main_keyword,
    ACTIONS(13), 1,
      sym_build_keyword,
    ACTIONS(15), 1,
      sym_test_keyword,
    ACTIONS(17), 1,
      sym_fn_keyword,
    ACTIONS(19), 1,
      sym_type_keyword,
    ACTIONS(21), 1,
      sym_pub_keyword,
    ACTIONS(23), 1,
      sym__ident,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym__type_prelude,
    STATE(61), 1,
      aux_sym_function_repeat1,
    STATE(127), 1,
      sym_visibility,
    STATE(133), 1,
      sym_ident,
    STATE(136), 1,
      sym_fn_signature,
    STATE(144), 1,
      sym__fn_modifiers,
    STATE(45), 4,
      sym_struct_type,
      sym_alias_type,
      sym_tuple_type,
      sym_empty_type,
    STATE(2), 8,
      sym__toplevel,
      sym_main,
      sym_build,
      sym_test,
      sym_entry_point,
      sym_function,
      sym_type_declaration,
      aux_sym_source_repeat1,
  [136] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(64), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(37), 1,
      sym_type_item,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      sym_annotation,
      sym_question_mark,
      sym_exclamation_mark,
    ACTIONS(62), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [183] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(59), 1,
      sym_type_item,
    ACTIONS(56), 7,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_close,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [224] = 10,
    ACTIONS(56), 1,
      sym__newline,
    ACTIONS(68), 1,
      sym_paren_open,
    ACTIONS(70), 1,
      sym_bracket_open,
    ACTIONS(72), 1,
      sym_brace_open,
    ACTIONS(74), 1,
      sym__type_ident,
    ACTIONS(76), 1,
      sym__comment,
    STATE(69), 1,
      sym_type_item,
    STATE(80), 1,
      sym_type_ident,
    ACTIONS(62), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
    STATE(81), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [265] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(80), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(78), 12,
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
  [292] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(84), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(82), 11,
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
  [318] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(88), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(86), 11,
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
  [344] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(92), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(90), 11,
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
  [370] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(96), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(94), 11,
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
  [396] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(100), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(98), 11,
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
  [422] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(104), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(102), 11,
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
  [448] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(108), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(106), 11,
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
  [474] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(112), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(110), 11,
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
  [500] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(116), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(114), 11,
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
  [526] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(120), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
    ACTIONS(118), 11,
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
  [552] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    ACTIONS(122), 1,
      sym_paren_close,
    STATE(13), 1,
      sym_type_ident,
    STATE(96), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [587] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    ACTIONS(124), 1,
      sym_paren_close,
    STATE(13), 1,
      sym_type_ident,
    STATE(96), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [622] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    ACTIONS(126), 1,
      sym_paren_close,
    STATE(13), 1,
      sym_type_ident,
    STATE(96), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [657] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    ACTIONS(128), 1,
      sym_paren_close,
    STATE(13), 1,
      sym_type_ident,
    STATE(96), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [692] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(113), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [724] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(87), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [756] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(65), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [788] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(101), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [820] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(102), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [852] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(91), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [884] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(111), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [916] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(130), 1,
      sym_paren_open,
    ACTIONS(132), 1,
      sym_bracket_open,
    ACTIONS(134), 1,
      sym_brace_open,
    ACTIONS(136), 1,
      sym__type_ident,
    STATE(80), 1,
      sym_type_ident,
    STATE(84), 1,
      sym_type_item,
    STATE(81), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [948] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(130), 1,
      sym_paren_open,
    ACTIONS(132), 1,
      sym_bracket_open,
    ACTIONS(134), 1,
      sym_brace_open,
    ACTIONS(136), 1,
      sym__type_ident,
    STATE(80), 1,
      sym_type_ident,
    STATE(83), 1,
      sym_type_item,
    STATE(81), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [980] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(103), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [1012] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(64), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [1044] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(100), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [1076] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(96), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [1108] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(98), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [1140] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      sym_paren_open,
    ACTIONS(58), 1,
      sym_bracket_open,
    ACTIONS(60), 1,
      sym_brace_open,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(13), 1,
      sym_type_ident,
    STATE(40), 1,
      sym_type_item,
    STATE(15), 8,
      sym_tuple_type,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_basic_type,
  [1172] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(142), 1,
      sym_exclamation_mark,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(144), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1196] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
      sym_brace_open,
      sym_assign,
    ACTIONS(148), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1216] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(152), 1,
      sym_brace_open,
    ACTIONS(154), 1,
      sym_assign,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(156), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1240] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(142), 1,
      sym_exclamation_mark,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(160), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1264] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
      sym_brace_open,
      sym_assign,
    ACTIONS(164), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1284] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(168), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1302] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(172), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1320] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(176), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1338] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(180), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1356] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(184), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1374] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(188), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1392] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(192), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1410] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(194), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(196), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1428] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(200), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1446] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(202), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(204), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1464] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(208), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1482] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(212), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1500] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(216), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1518] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(218), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(220), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1536] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(222), 3,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
    ACTIONS(224), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1554] = 10,
    ACTIONS(23), 1,
      sym__ident,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      sym_brace_close,
    ACTIONS(230), 1,
      sym_pub_keyword,
    ACTIONS(232), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym_struct_type_repeat1,
    STATE(105), 1,
      sym_struct_field,
    STATE(134), 1,
      sym_visibility,
    STATE(142), 1,
      sym_ident,
  [1585] = 10,
    ACTIONS(23), 1,
      sym__ident,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      sym_pub_keyword,
    ACTIONS(232), 1,
      sym__newline,
    ACTIONS(234), 1,
      sym_brace_close,
    STATE(63), 1,
      aux_sym_struct_type_repeat1,
    STATE(105), 1,
      sym_struct_field,
    STATE(134), 1,
      sym_visibility,
    STATE(142), 1,
      sym_ident,
  [1616] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(138), 6,
      anon_sym_COMMA,
      sym_colon,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_open,
      sym_brace_close,
  [1634] = 9,
    ACTIONS(23), 1,
      sym__ident,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      sym_pub_keyword,
    ACTIONS(232), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym_struct_type_repeat1,
    STATE(105), 1,
      sym_struct_field,
    STATE(134), 1,
      sym_visibility,
    STATE(142), 1,
      sym_ident,
  [1662] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(238), 1,
      sym_annotation,
    ACTIONS(240), 1,
      sym_fn_keyword,
    ACTIONS(242), 1,
      sym_pub_keyword,
    STATE(93), 1,
      aux_sym_function_repeat1,
    STATE(131), 1,
      sym_fn_signature,
    STATE(144), 2,
      sym__fn_modifiers,
      sym_visibility,
  [1685] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(23), 1,
      sym__ident,
    ACTIONS(230), 1,
      sym_pub_keyword,
    ACTIONS(244), 1,
      sym_brace_close,
    STATE(72), 1,
      sym_struct_field,
    STATE(134), 1,
      sym_visibility,
    STATE(142), 1,
      sym_ident,
  [1707] = 5,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym_struct_type_repeat1,
    ACTIONS(249), 3,
      sym_brace_close,
      sym_pub_keyword,
      sym__ident,
  [1725] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      sym_paren_close,
    STATE(19), 1,
      sym_comma,
    STATE(97), 1,
      aux_sym_tuple_type_repeat1,
  [1747] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      sym_paren_close,
    STATE(18), 1,
      sym_comma,
    STATE(99), 1,
      aux_sym_tuple_type_repeat1,
  [1769] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(82), 1,
      sym__newline,
    ACTIONS(84), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [1782] = 6,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      sym_brace_close,
    ACTIONS(265), 1,
      sym__newline,
    STATE(60), 1,
      aux_sym_struct_type_repeat1,
    STATE(67), 1,
      aux_sym_struct_type_repeat2,
  [1801] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(268), 1,
      sym_brace_open,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      sym_raw_string_literal,
    STATE(49), 1,
      sym_body,
    STATE(137), 1,
      sym_string_literal,
  [1820] = 5,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(138), 1,
      sym__newline,
    ACTIONS(274), 1,
      sym_question_mark,
    ACTIONS(276), 1,
      sym_exclamation_mark,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [1837] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(106), 1,
      sym__newline,
    ACTIONS(108), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [1850] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(98), 1,
      sym__newline,
    ACTIONS(100), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [1863] = 6,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      sym_brace_close,
    ACTIONS(282), 1,
      sym__newline,
    STATE(57), 1,
      aux_sym_struct_type_repeat1,
    STATE(85), 1,
      aux_sym_struct_type_repeat2,
  [1882] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(86), 1,
      sym__newline,
    ACTIONS(88), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [1895] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(114), 1,
      sym__newline,
    ACTIONS(116), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [1908] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(118), 1,
      sym__newline,
    ACTIONS(120), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [1921] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(284), 5,
      sym_paren_open,
      sym_paren_close,
      sym_bracket_open,
      sym_brace_open,
      sym__type_ident,
  [1932] = 5,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(288), 1,
      sym__semicolon,
    ACTIONS(290), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym_body_repeat1,
    ACTIONS(286), 2,
      sym_statement,
      sym_brace_close,
  [1949] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(94), 1,
      sym__newline,
    ACTIONS(96), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [1962] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(90), 1,
      sym__newline,
    ACTIONS(92), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [1975] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(102), 1,
      sym__newline,
    ACTIONS(104), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [1988] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(110), 1,
      sym__newline,
    ACTIONS(112), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [2001] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(78), 1,
      sym__newline,
    ACTIONS(80), 4,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_close,
  [2014] = 5,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(274), 1,
      sym_question_mark,
    ACTIONS(276), 1,
      sym_exclamation_mark,
    ACTIONS(294), 1,
      sym__newline,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [2031] = 5,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(274), 1,
      sym_question_mark,
    ACTIONS(276), 1,
      sym_exclamation_mark,
    ACTIONS(298), 1,
      sym__newline,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [2048] = 6,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(228), 1,
      sym_brace_close,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      sym__newline,
    STATE(58), 1,
      aux_sym_struct_type_repeat1,
    STATE(67), 1,
      aux_sym_struct_type_repeat2,
  [2067] = 5,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(306), 1,
      sym__semicolon,
    ACTIONS(309), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym_body_repeat1,
    ACTIONS(304), 2,
      sym_statement,
      sym_brace_close,
  [2084] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(312), 1,
      sym_colon,
    ACTIONS(314), 1,
      sym_brace_close,
  [2100] = 5,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(316), 1,
      sym__semicolon,
    ACTIONS(318), 1,
      sym_brace_close,
    ACTIONS(320), 1,
      sym__newline,
    STATE(77), 1,
      aux_sym_body_repeat1,
  [2116] = 4,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(324), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [2130] = 4,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(328), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [2144] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(331), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_bracket_close,
  [2160] = 4,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(337), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [2174] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(339), 1,
      sym_annotation,
    STATE(93), 1,
      aux_sym_function_repeat1,
    ACTIONS(342), 2,
      sym_fn_keyword,
      sym_pub_keyword,
  [2188] = 5,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(316), 1,
      sym__semicolon,
    ACTIONS(320), 1,
      sym__newline,
    ACTIONS(344), 1,
      sym_brace_close,
    STATE(77), 1,
      aux_sym_body_repeat1,
  [2204] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      sym_paren_close,
    STATE(34), 1,
      sym_comma,
    STATE(95), 1,
      aux_sym_tuple_type_repeat1,
  [2220] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2234] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(124), 1,
      sym_paren_close,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      sym_comma,
    STATE(95), 1,
      aux_sym_tuple_type_repeat1,
  [2250] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(351), 1,
      sym_colon,
    ACTIONS(353), 1,
      sym_brace_close,
  [2266] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(122), 1,
      sym_paren_close,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      sym_comma,
    STATE(95), 1,
      aux_sym_tuple_type_repeat1,
  [2282] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(355), 1,
      sym_colon,
    ACTIONS(357), 1,
      sym_bracket_close,
  [2298] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(359), 1,
      sym_brace_close,
  [2311] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(361), 1,
      sym_brace_open,
  [2324] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(363), 1,
      sym_brace_close,
  [2337] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(365), 1,
      sym_brace_open,
    ACTIONS(367), 1,
      sym_single_arrow,
    STATE(150), 1,
      sym_return_type,
  [2350] = 3,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(369), 1,
      sym__newline,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [2361] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      sym_paren_close,
    STATE(116), 1,
      aux_sym_param_list_repeat1,
  [2374] = 4,
    ACTIONS(76), 1,
      sym__comment,
    ACTIONS(316), 1,
      sym__semicolon,
    ACTIONS(320), 1,
      sym__newline,
    STATE(77), 1,
      aux_sym_body_repeat1,
  [2387] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(375), 3,
      sym_colon,
      sym_paren_open,
      sym_brace_open,
  [2396] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(377), 1,
      sym_statement,
    ACTIONS(379), 1,
      sym_brace_close,
    STATE(110), 1,
      aux_sym_body_repeat2,
  [2409] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(381), 1,
      sym_statement,
    ACTIONS(384), 1,
      sym_brace_close,
    STATE(110), 1,
      aux_sym_body_repeat2,
  [2422] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(386), 1,
      sym_bracket_close,
  [2435] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(388), 1,
      sym_statement,
    ACTIONS(390), 1,
      sym_brace_close,
    STATE(109), 1,
      aux_sym_body_repeat2,
  [2448] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 1,
      sym_question_mark,
    ACTIONS(236), 1,
      sym_exclamation_mark,
    ACTIONS(392), 1,
      sym_bracket_close,
  [2461] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      sym_paren_close,
    STATE(106), 1,
      aux_sym_param_list_repeat1,
  [2474] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(367), 1,
      sym_single_arrow,
    ACTIONS(398), 1,
      sym_brace_open,
    STATE(140), 1,
      sym_return_type,
  [2487] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      sym_paren_close,
    STATE(116), 1,
      aux_sym_param_list_repeat1,
  [2500] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(405), 1,
      sym_paren_open,
    STATE(104), 1,
      sym_param_list,
  [2510] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(407), 1,
      sym__ident,
    STATE(135), 1,
      sym_ident,
  [2520] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(268), 1,
      sym_brace_open,
    STATE(52), 1,
      sym_body,
  [2530] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(409), 2,
      sym_brace_open,
      sym_single_arrow,
  [2538] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(411), 1,
      sym_param,
    ACTIONS(413), 1,
      sym_paren_close,
  [2548] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(407), 1,
      sym__ident,
    STATE(117), 1,
      sym_ident,
  [2558] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(415), 2,
      sym_brace_open,
      sym_single_arrow,
  [2566] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(417), 1,
      sym_param,
    ACTIONS(419), 1,
      sym_paren_close,
  [2576] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(421), 2,
      sym_brace_open,
      sym_single_arrow,
  [2584] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(38), 1,
      sym_type_ident,
  [2594] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(423), 1,
      sym_fn_keyword,
    ACTIONS(425), 1,
      sym_type_keyword,
  [2604] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2612] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(373), 1,
      sym_paren_close,
    ACTIONS(417), 1,
      sym_param,
  [2622] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(427), 2,
      sym_fn_keyword,
      sym_type_keyword,
  [2630] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(268), 1,
      sym_brace_open,
    STATE(51), 1,
      sym_body,
  [2640] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(66), 1,
      sym__type_ident,
    STATE(41), 1,
      sym_type_ident,
  [2650] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(268), 1,
      sym_brace_open,
    STATE(44), 1,
      sym_body,
  [2660] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(407), 1,
      sym__ident,
    STATE(145), 1,
      sym_ident,
  [2670] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(405), 1,
      sym_paren_open,
    STATE(115), 1,
      sym_param_list,
  [2680] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(268), 1,
      sym_brace_open,
    STATE(46), 1,
      sym_body,
  [2690] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(268), 1,
      sym_brace_open,
    STATE(54), 1,
      sym_body,
  [2700] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(268), 1,
      sym_brace_open,
    STATE(53), 1,
      sym_body,
  [2710] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(429), 2,
      sym_brace_open,
      sym_single_arrow,
  [2718] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(431), 1,
      sym_brace_open,
  [2725] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
  [2732] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(435), 1,
      sym_colon,
  [2739] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(437), 1,
      sym_brace_open,
  [2746] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(439), 1,
      sym_fn_keyword,
  [2753] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(441), 1,
      sym_colon,
  [2760] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(443), 1,
      sym_brace_open,
  [2767] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(445), 1,
      sym_brace_open,
  [2774] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(427), 1,
      sym__ident,
  [2781] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(417), 1,
      sym_param,
  [2788] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(398), 1,
      sym_brace_open,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 265,
  [SMALL_STATE(8)] = 292,
  [SMALL_STATE(9)] = 318,
  [SMALL_STATE(10)] = 344,
  [SMALL_STATE(11)] = 370,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 422,
  [SMALL_STATE(14)] = 448,
  [SMALL_STATE(15)] = 474,
  [SMALL_STATE(16)] = 500,
  [SMALL_STATE(17)] = 526,
  [SMALL_STATE(18)] = 552,
  [SMALL_STATE(19)] = 587,
  [SMALL_STATE(20)] = 622,
  [SMALL_STATE(21)] = 657,
  [SMALL_STATE(22)] = 692,
  [SMALL_STATE(23)] = 724,
  [SMALL_STATE(24)] = 756,
  [SMALL_STATE(25)] = 788,
  [SMALL_STATE(26)] = 820,
  [SMALL_STATE(27)] = 852,
  [SMALL_STATE(28)] = 884,
  [SMALL_STATE(29)] = 916,
  [SMALL_STATE(30)] = 948,
  [SMALL_STATE(31)] = 980,
  [SMALL_STATE(32)] = 1012,
  [SMALL_STATE(33)] = 1044,
  [SMALL_STATE(34)] = 1076,
  [SMALL_STATE(35)] = 1108,
  [SMALL_STATE(36)] = 1140,
  [SMALL_STATE(37)] = 1172,
  [SMALL_STATE(38)] = 1196,
  [SMALL_STATE(39)] = 1216,
  [SMALL_STATE(40)] = 1240,
  [SMALL_STATE(41)] = 1264,
  [SMALL_STATE(42)] = 1284,
  [SMALL_STATE(43)] = 1302,
  [SMALL_STATE(44)] = 1320,
  [SMALL_STATE(45)] = 1338,
  [SMALL_STATE(46)] = 1356,
  [SMALL_STATE(47)] = 1374,
  [SMALL_STATE(48)] = 1392,
  [SMALL_STATE(49)] = 1410,
  [SMALL_STATE(50)] = 1428,
  [SMALL_STATE(51)] = 1446,
  [SMALL_STATE(52)] = 1464,
  [SMALL_STATE(53)] = 1482,
  [SMALL_STATE(54)] = 1500,
  [SMALL_STATE(55)] = 1518,
  [SMALL_STATE(56)] = 1536,
  [SMALL_STATE(57)] = 1554,
  [SMALL_STATE(58)] = 1585,
  [SMALL_STATE(59)] = 1616,
  [SMALL_STATE(60)] = 1634,
  [SMALL_STATE(61)] = 1662,
  [SMALL_STATE(62)] = 1685,
  [SMALL_STATE(63)] = 1707,
  [SMALL_STATE(64)] = 1725,
  [SMALL_STATE(65)] = 1747,
  [SMALL_STATE(66)] = 1769,
  [SMALL_STATE(67)] = 1782,
  [SMALL_STATE(68)] = 1801,
  [SMALL_STATE(69)] = 1820,
  [SMALL_STATE(70)] = 1837,
  [SMALL_STATE(71)] = 1850,
  [SMALL_STATE(72)] = 1863,
  [SMALL_STATE(73)] = 1882,
  [SMALL_STATE(74)] = 1895,
  [SMALL_STATE(75)] = 1908,
  [SMALL_STATE(76)] = 1921,
  [SMALL_STATE(77)] = 1932,
  [SMALL_STATE(78)] = 1949,
  [SMALL_STATE(79)] = 1962,
  [SMALL_STATE(80)] = 1975,
  [SMALL_STATE(81)] = 1988,
  [SMALL_STATE(82)] = 2001,
  [SMALL_STATE(83)] = 2014,
  [SMALL_STATE(84)] = 2031,
  [SMALL_STATE(85)] = 2048,
  [SMALL_STATE(86)] = 2067,
  [SMALL_STATE(87)] = 2084,
  [SMALL_STATE(88)] = 2100,
  [SMALL_STATE(89)] = 2116,
  [SMALL_STATE(90)] = 2130,
  [SMALL_STATE(91)] = 2144,
  [SMALL_STATE(92)] = 2160,
  [SMALL_STATE(93)] = 2174,
  [SMALL_STATE(94)] = 2188,
  [SMALL_STATE(95)] = 2204,
  [SMALL_STATE(96)] = 2220,
  [SMALL_STATE(97)] = 2234,
  [SMALL_STATE(98)] = 2250,
  [SMALL_STATE(99)] = 2266,
  [SMALL_STATE(100)] = 2282,
  [SMALL_STATE(101)] = 2298,
  [SMALL_STATE(102)] = 2311,
  [SMALL_STATE(103)] = 2324,
  [SMALL_STATE(104)] = 2337,
  [SMALL_STATE(105)] = 2350,
  [SMALL_STATE(106)] = 2361,
  [SMALL_STATE(107)] = 2374,
  [SMALL_STATE(108)] = 2387,
  [SMALL_STATE(109)] = 2396,
  [SMALL_STATE(110)] = 2409,
  [SMALL_STATE(111)] = 2422,
  [SMALL_STATE(112)] = 2435,
  [SMALL_STATE(113)] = 2448,
  [SMALL_STATE(114)] = 2461,
  [SMALL_STATE(115)] = 2474,
  [SMALL_STATE(116)] = 2487,
  [SMALL_STATE(117)] = 2500,
  [SMALL_STATE(118)] = 2510,
  [SMALL_STATE(119)] = 2520,
  [SMALL_STATE(120)] = 2530,
  [SMALL_STATE(121)] = 2538,
  [SMALL_STATE(122)] = 2548,
  [SMALL_STATE(123)] = 2558,
  [SMALL_STATE(124)] = 2566,
  [SMALL_STATE(125)] = 2576,
  [SMALL_STATE(126)] = 2584,
  [SMALL_STATE(127)] = 2594,
  [SMALL_STATE(128)] = 2604,
  [SMALL_STATE(129)] = 2612,
  [SMALL_STATE(130)] = 2622,
  [SMALL_STATE(131)] = 2630,
  [SMALL_STATE(132)] = 2640,
  [SMALL_STATE(133)] = 2650,
  [SMALL_STATE(134)] = 2660,
  [SMALL_STATE(135)] = 2670,
  [SMALL_STATE(136)] = 2680,
  [SMALL_STATE(137)] = 2690,
  [SMALL_STATE(138)] = 2700,
  [SMALL_STATE(139)] = 2710,
  [SMALL_STATE(140)] = 2718,
  [SMALL_STATE(141)] = 2725,
  [SMALL_STATE(142)] = 2732,
  [SMALL_STATE(143)] = 2739,
  [SMALL_STATE(144)] = 2746,
  [SMALL_STATE(145)] = 2753,
  [SMALL_STATE(146)] = 2760,
  [SMALL_STATE(147)] = 2767,
  [SMALL_STATE(148)] = 2774,
  [SMALL_STATE(149)] = 2781,
  [SMALL_STATE(150)] = 2788,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(61),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(138),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(119),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(68),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(122),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(126),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(130),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(108),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_type, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_type, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ident, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ident, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_dict_type, 5),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_dict_type, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_type, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_type, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_item, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_item, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_type, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_type, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_type, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_type, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_prelude, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_prelude, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_prelude, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_prelude, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_point, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_point, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_type_repeat1, 2), SHIFT_REPEAT(63),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_type_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_type_repeat1, 2), SHIFT_REPEAT(63),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_type_repeat2, 2), SHIFT_REPEAT(60),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_type_repeat2, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_type_repeat2, 2), SHIFT_REPEAT(60),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(86),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(86),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(90),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(93),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2), SHIFT_REPEAT(76),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_type_repeat2, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(107),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 4),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(149),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn_modifiers, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 5),
  [433] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
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
