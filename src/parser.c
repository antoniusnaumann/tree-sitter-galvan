#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 180
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_annotation = 1,
  sym_statement = 2,
  anon_sym_COMMA = 3,
  sym_colon = 4,
  sym__semicolon = 5,
  sym_dot = 6,
  sym_question_mark = 7,
  sym_exclamation_mark = 8,
  sym_paren_open = 9,
  sym_paren_close = 10,
  sym_bracket_open = 11,
  sym_bracket_close = 12,
  sym_brace_open = 13,
  sym_brace_close = 14,
  sym_single_arrow = 15,
  sym_double_arrow = 16,
  sym_plus = 17,
  sym_minus = 18,
  sym_multiply = 19,
  sym_divide = 20,
  sym_remainder = 21,
  sym_power = 22,
  sym_assign = 23,
  sym_add_assign = 24,
  sym_sub_assign = 25,
  sym_mul_assign = 26,
  sym_pow_assign = 27,
  sym_div_assign = 28,
  sym_rem_assign = 29,
  sym_equal = 30,
  sym_not_equal = 31,
  sym_greater = 32,
  sym_greater_equal = 33,
  sym_less = 34,
  sym_less_equal = 35,
  sym_identical = 36,
  sym_not_identical = 37,
  sym_and = 38,
  sym_or = 39,
  sym_xor = 40,
  sym_not = 41,
  sym_concat = 42,
  sym_remove = 43,
  sym_contains = 44,
  sym_main_keyword = 45,
  sym_build_keyword = 46,
  sym_test_keyword = 47,
  sym_fn_keyword = 48,
  sym_type_keyword = 49,
  sym_ref_keyword = 50,
  sym_let_keyword = 51,
  sym_mut_keyword = 52,
  sym_true_keyword = 53,
  sym_false_keyword = 54,
  sym_none_keyword = 55,
  sym_async_keyword = 56,
  sym_const_keyword = 57,
  sym_pub_keyword = 58,
  sym_else_keyword = 59,
  anon_sym_DQUOTE = 60,
  aux_sym_string_literal_token1 = 61,
  sym_raw_string_literal = 62,
  sym_number_literal = 63,
  sym__ident = 64,
  sym__type_ident = 65,
  sym__newline = 66,
  sym__comment = 67,
  sym_source = 68,
  sym_body = 69,
  sym__toplevel = 70,
  sym_main = 71,
  sym_build = 72,
  sym_test = 73,
  sym_entry_point = 74,
  sym_function = 75,
  sym_fn_signature = 76,
  sym__fn_modifiers = 77,
  sym_param_list = 78,
  sym_param = 79,
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
  sym_declaration_modifier = 99,
  sym_visibility = 100,
  sym_string_literal = 101,
  sym_ident = 102,
  sym_type_ident = 103,
  aux_sym_source_repeat1 = 104,
  aux_sym_body_repeat1 = 105,
  aux_sym_body_repeat2 = 106,
  aux_sym_function_repeat1 = 107,
  aux_sym_param_list_repeat1 = 108,
  aux_sym_struct_repeat1 = 109,
  aux_sym_struct_repeat2 = 110,
  aux_sym_tuple_struct_repeat1 = 111,
  aux_sym_tuple_type_repeat1 = 112,
  aux_sym_string_literal_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_annotation] = "annotation",
  [sym_statement] = "statement",
  [anon_sym_COMMA] = ",",
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
  [sym_param] = "param",
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
  [sym_declaration_modifier] = "declaration_modifier",
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
  [sym_annotation] = sym_annotation,
  [sym_statement] = sym_statement,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_param] = sym_param,
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
  [sym_declaration_modifier] = sym_declaration_modifier,
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
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [sym_param] = {
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
  [sym_declaration_modifier] = {
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
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
  [25] = 25,
  [26] = 24,
  [27] = 25,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 31,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 30,
  [41] = 41,
  [42] = 42,
  [43] = 34,
  [44] = 41,
  [45] = 28,
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
  [67] = 58,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 15,
  [83] = 20,
  [84] = 14,
  [85] = 85,
  [86] = 86,
  [87] = 18,
  [88] = 19,
  [89] = 17,
  [90] = 12,
  [91] = 22,
  [92] = 92,
  [93] = 21,
  [94] = 86,
  [95] = 13,
  [96] = 10,
  [97] = 16,
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
  [113] = 113,
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
  [125] = 85,
  [126] = 126,
  [127] = 119,
  [128] = 128,
  [129] = 114,
  [130] = 126,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 135,
  [137] = 132,
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
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(187);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'x') ADVANCE(166);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == 8594) ADVANCE(71);
      if (lookahead == 8658) ADVANCE(72);
      if (lookahead == 8712 ||
          lookahead == 8714) ADVANCE(105);
      if (lookahead == 8800) ADVANCE(88);
      if (lookahead == 8801) ADVANCE(94);
      if (lookahead == 8802) ADVANCE(95);
      if (lookahead == 8804) ADVANCE(93);
      if (lookahead == 8805) ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('d' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '}') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '/') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(126);
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
      if (lookahead == '#') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(96);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '{') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(194);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '}') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(131);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(131);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == '6') ADVANCE(131);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(131);
      END_STATE();
    case 21:
      if (lookahead == '8') ADVANCE(131);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(42);
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
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 'z') ADVANCE(33);
      END_STATE();
    case 51:
      if (lookahead == '|') ADVANCE(98);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(190);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == 8594) ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_statement);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_statement);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_question_mark);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_exclamation_mark);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_exclamation_mark);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_paren_open);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_paren_close);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_bracket_open);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_bracket_close);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_brace_open);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_brace_close);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_single_arrow);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_double_arrow);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_plus);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == '=') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_minus);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_multiply);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_divide);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_remainder);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_power);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '^') ADVANCE(100);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_assign);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_add_assign);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_sub_assign);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_mul_assign);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_pow_assign);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_div_assign);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_rem_assign);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_equal);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_not_equal);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_greater);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_greater_equal);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_less);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_less_equal);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identical);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_not_identical);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_concat);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_remove);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_contains);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_contains);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_main_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_build_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_test_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_fn_keyword);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_fn_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_type_keyword);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_type_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ref_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_let_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_mut_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_true_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_false_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_none_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_async_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_const_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_pub_keyword);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_pub_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_else_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '/') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(194);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(7);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'b') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'c') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'd') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 'y') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'y') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'f') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'i') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'l') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'p') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 's') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'u') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == 'y') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'D') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'D') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__type_ident);
      if (lookahead == 'O') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__type_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 53},
  [51] = {.lex_state = 53},
  [52] = {.lex_state = 53},
  [53] = {.lex_state = 53},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 53},
  [56] = {.lex_state = 53},
  [57] = {.lex_state = 53},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 53},
  [60] = {.lex_state = 53},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 53},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 53},
  [69] = {.lex_state = 53},
  [70] = {.lex_state = 53},
  [71] = {.lex_state = 53},
  [72] = {.lex_state = 53},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 53},
  [76] = {.lex_state = 53},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 53},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 53},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 53},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 53},
  [114] = {.lex_state = 53},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 53},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 53},
  [119] = {.lex_state = 53},
  [120] = {.lex_state = 53},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 53},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 53},
  [127] = {.lex_state = 53},
  [128] = {.lex_state = 53},
  [129] = {.lex_state = 53},
  [130] = {.lex_state = 53},
  [131] = {.lex_state = 53},
  [132] = {.lex_state = 53},
  [133] = {.lex_state = 53},
  [134] = {.lex_state = 53},
  [135] = {.lex_state = 53},
  [136] = {.lex_state = 53},
  [137] = {.lex_state = 53},
  [138] = {.lex_state = 53},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 53},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 53},
  [147] = {.lex_state = 53},
  [148] = {.lex_state = 53},
  [149] = {.lex_state = 53},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 53},
  [154] = {.lex_state = 53},
  [155] = {.lex_state = 53},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 53},
  [158] = {.lex_state = 53},
  [159] = {.lex_state = 53},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 53},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 15},
  [165] = {.lex_state = 53},
  [166] = {.lex_state = 53},
  [167] = {.lex_state = 53},
  [168] = {.lex_state = 53},
  [169] = {.lex_state = 53},
  [170] = {.lex_state = 53},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 53},
  [173] = {.lex_state = 53},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 53},
  [176] = {.lex_state = 53},
  [177] = {.lex_state = 53},
  [178] = {.lex_state = 53},
  [179] = {.lex_state = 53},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_annotation] = ACTIONS(1),
    [sym_statement] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source] = STATE(175),
    [sym__toplevel] = STATE(3),
    [sym_main] = STATE(3),
    [sym_build] = STATE(3),
    [sym_test] = STATE(3),
    [sym_entry_point] = STATE(3),
    [sym_function] = STATE(3),
    [sym_fn_signature] = STATE(157),
    [sym__fn_modifiers] = STATE(171),
    [sym_type_declaration] = STATE(3),
    [sym__type_prelude] = STATE(52),
    [sym_struct] = STATE(57),
    [sym_alias] = STATE(57),
    [sym_tuple_struct] = STATE(57),
    [sym_empty_struct] = STATE(57),
    [sym_visibility] = STATE(160),
    [sym_ident] = STATE(147),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_function_repeat1] = STATE(80),
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
    STATE(52), 1,
      sym__type_prelude,
    STATE(80), 1,
      aux_sym_function_repeat1,
    STATE(147), 1,
      sym_ident,
    STATE(157), 1,
      sym_fn_signature,
    STATE(160), 1,
      sym_visibility,
    STATE(171), 1,
      sym__fn_modifiers,
    STATE(57), 4,
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
    STATE(52), 1,
      sym__type_prelude,
    STATE(80), 1,
      aux_sym_function_repeat1,
    STATE(147), 1,
      sym_ident,
    STATE(157), 1,
      sym_fn_signature,
    STATE(160), 1,
      sym_visibility,
    STATE(171), 1,
      sym__fn_modifiers,
    STATE(57), 4,
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
    STATE(12), 1,
      sym_type_item,
    STATE(17), 1,
      sym_type_ident,
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
    STATE(19), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [177] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(12), 1,
      sym_type_item,
    STATE(17), 1,
      sym_type_ident,
    ACTIONS(51), 7,
      anon_sym_COMMA,
      sym_colon,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_bracket_close,
      sym_brace_close,
    STATE(19), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [218] = 15,
    ACTIONS(19), 1,
      sym_pub_keyword,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      sym_paren_open,
    ACTIONS(69), 1,
      sym_paren_close,
    ACTIONS(71), 1,
      sym_bracket_open,
    ACTIONS(73), 1,
      sym_brace_open,
    ACTIONS(75), 1,
      sym__type_ident,
    ACTIONS(77), 1,
      sym__newline,
    ACTIONS(79), 1,
      sym__comment,
    STATE(35), 1,
      sym_visibility,
    STATE(58), 1,
      aux_sym_struct_repeat1,
    STATE(89), 1,
      sym_type_ident,
    STATE(109), 1,
      sym_type_item,
    STATE(144), 1,
      sym_tuple_field,
    STATE(88), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [271] = 15,
    ACTIONS(19), 1,
      sym_pub_keyword,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      sym_paren_open,
    ACTIONS(71), 1,
      sym_bracket_open,
    ACTIONS(73), 1,
      sym_brace_open,
    ACTIONS(75), 1,
      sym__type_ident,
    ACTIONS(77), 1,
      sym__newline,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(81), 1,
      sym_paren_close,
    STATE(35), 1,
      sym_visibility,
    STATE(58), 1,
      aux_sym_struct_repeat1,
    STATE(89), 1,
      sym_type_ident,
    STATE(109), 1,
      sym_type_item,
    STATE(144), 1,
      sym_tuple_field,
    STATE(88), 8,
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
    ACTIONS(67), 1,
      sym_paren_open,
    ACTIONS(71), 1,
      sym_bracket_open,
    ACTIONS(73), 1,
      sym_brace_open,
    ACTIONS(75), 1,
      sym__type_ident,
    ACTIONS(79), 1,
      sym__comment,
    STATE(89), 1,
      sym_type_ident,
    STATE(90), 1,
      sym_type_item,
    ACTIONS(59), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
    STATE(88), 8,
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
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      sym_paren_open,
    ACTIONS(71), 1,
      sym_bracket_open,
    ACTIONS(73), 1,
      sym_brace_open,
    ACTIONS(75), 1,
      sym__type_ident,
    ACTIONS(77), 1,
      sym__newline,
    ACTIONS(79), 1,
      sym__comment,
    STATE(35), 1,
      sym_visibility,
    STATE(58), 1,
      aux_sym_struct_repeat1,
    STATE(89), 1,
      sym_type_ident,
    STATE(109), 1,
      sym_type_item,
    STATE(144), 1,
      sym_tuple_field,
    STATE(88), 8,
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
      sym_annotation,
      anon_sym_COMMA,
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
    STATE(35), 1,
      sym_visibility,
    STATE(89), 1,
      sym_type_ident,
    STATE(99), 1,
      sym_tuple_field,
    STATE(109), 1,
      sym_type_item,
    STATE(88), 8,
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
      sym_annotation,
      anon_sym_COMMA,
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
      sym_annotation,
      anon_sym_COMMA,
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
      sym_annotation,
      anon_sym_COMMA,
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
      sym_annotation,
      anon_sym_COMMA,
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
      sym_annotation,
      anon_sym_COMMA,
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
      sym_annotation,
      anon_sym_COMMA,
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
      sym_annotation,
      anon_sym_COMMA,
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
      sym_annotation,
      anon_sym_COMMA,
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
      sym_annotation,
      anon_sym_COMMA,
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
      sym_annotation,
      anon_sym_COMMA,
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
      sym_annotation,
      anon_sym_COMMA,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(12), 1,
      sym_type_item,
    STATE(17), 1,
      sym_type_ident,
    ACTIONS(51), 3,
      sym_question_mark,
      sym_exclamation_mark,
      sym_brace_open,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    ACTIONS(143), 1,
      sym_paren_close,
    STATE(17), 1,
      sym_type_ident,
    STATE(120), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    ACTIONS(145), 1,
      sym_paren_close,
    STATE(17), 1,
      sym_type_ident,
    STATE(120), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    ACTIONS(147), 1,
      sym_paren_close,
    STATE(17), 1,
      sym_type_ident,
    STATE(120), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    ACTIONS(149), 1,
      sym_paren_close,
    STATE(17), 1,
      sym_type_ident,
    STATE(120), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(127), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(87), 1,
      sym_paren_open,
    ACTIONS(91), 1,
      sym_bracket_open,
    ACTIONS(93), 1,
      sym_brace_open,
    ACTIONS(97), 1,
      sym__type_ident,
    STATE(89), 1,
      sym_type_ident,
    STATE(104), 1,
      sym_type_item,
    STATE(88), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(136), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(137), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(53), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(118), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(86), 1,
      sym_type_item,
    STATE(19), 8,
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
    STATE(89), 1,
      sym_type_ident,
    STATE(100), 1,
      sym_type_item,
    STATE(88), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(132), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(138), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(131), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(87), 1,
      sym_paren_open,
    ACTIONS(91), 1,
      sym_bracket_open,
    ACTIONS(93), 1,
      sym_brace_open,
    ACTIONS(97), 1,
      sym__type_ident,
    STATE(89), 1,
      sym_type_ident,
    STATE(102), 1,
      sym_type_item,
    STATE(88), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(135), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(126), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(120), 1,
      sym_type_item,
    STATE(19), 8,
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
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(94), 1,
      sym_type_item,
    STATE(19), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1448] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(130), 1,
      sym_type_item,
    STATE(19), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1480] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_paren_open,
    ACTIONS(55), 1,
      sym_bracket_open,
    ACTIONS(57), 1,
      sym_brace_open,
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(17), 1,
      sym_type_ident,
    STATE(119), 1,
      sym_type_item,
    STATE(19), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1512] = 8,
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
    STATE(89), 1,
      sym_type_ident,
    STATE(101), 1,
      sym_type_item,
    STATE(88), 8,
      sym_result_type,
      sym_optional_type,
      sym_set_type,
      sym_array_type,
      sym_dict_type,
      sym_ordered_dict_type,
      sym_tuple_type,
      sym_basic_type,
  [1544] = 12,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      sym_brace_close,
    ACTIONS(157), 1,
      sym_pub_keyword,
    ACTIONS(159), 1,
      sym__newline,
    STATE(67), 1,
      aux_sym_struct_repeat1,
    STATE(92), 1,
      sym_visibility,
    STATE(141), 1,
      sym_struct_field,
    STATE(156), 1,
      sym_declaration_modifier,
    STATE(167), 1,
      sym_ident,
    ACTIONS(155), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [1583] = 12,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      sym_pub_keyword,
    ACTIONS(159), 1,
      sym__newline,
    ACTIONS(161), 1,
      sym_brace_close,
    STATE(67), 1,
      aux_sym_struct_repeat1,
    STATE(92), 1,
      sym_visibility,
    STATE(141), 1,
      sym_struct_field,
    STATE(156), 1,
      sym_declaration_modifier,
    STATE(167), 1,
      sym_ident,
    ACTIONS(155), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [1622] = 11,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      sym_pub_keyword,
    ACTIONS(159), 1,
      sym__newline,
    STATE(67), 1,
      aux_sym_struct_repeat1,
    STATE(92), 1,
      sym_visibility,
    STATE(141), 1,
      sym_struct_field,
    STATE(156), 1,
      sym_declaration_modifier,
    STATE(167), 1,
      sym_ident,
    ACTIONS(155), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [1658] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
      sym_brace_open,
      sym_assign,
    ACTIONS(165), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1678] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      sym_annotation,
      sym_paren_open,
      sym_brace_open,
      sym_assign,
    ACTIONS(169), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1698] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(173), 1,
      sym_paren_open,
    ACTIONS(175), 1,
      sym_brace_open,
    ACTIONS(177), 1,
      sym_assign,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(179), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [1724] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(185), 1,
      sym_exclamation_mark,
    ACTIONS(181), 2,
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
  [1747] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(157), 1,
      sym_pub_keyword,
    ACTIONS(189), 1,
      sym_brace_close,
    STATE(92), 1,
      sym_visibility,
    STATE(98), 1,
      sym_struct_field,
    STATE(156), 1,
      sym_declaration_modifier,
    STATE(167), 1,
      sym_ident,
    ACTIONS(155), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [1777] = 3,
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
  [1794] = 3,
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
  [1811] = 3,
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
  [1828] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      sym__newline,
    STATE(58), 1,
      aux_sym_struct_repeat1,
    ACTIONS(206), 6,
      sym_paren_open,
      sym_paren_close,
      sym_bracket_open,
      sym_brace_open,
      sym_pub_keyword,
      sym__type_ident,
  [1849] = 3,
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
  [1866] = 3,
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
  [1883] = 3,
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
  [1900] = 3,
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
  [1917] = 3,
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
  [1934] = 3,
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
  [1951] = 3,
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
  [1968] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(241), 4,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
      sym__ident,
    ACTIONS(239), 5,
      sym_paren_open,
      sym_paren_close,
      sym_bracket_open,
      sym_brace_open,
      sym__type_ident,
  [1985] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      sym__newline,
    STATE(67), 1,
      aux_sym_struct_repeat1,
    ACTIONS(206), 6,
      sym_brace_close,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
      sym_pub_keyword,
      sym__ident,
  [2006] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(251), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2023] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(255), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2040] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(259), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2057] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(263), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2074] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(267), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2091] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(271), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2108] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(275), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2125] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(279), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2142] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym_annotation,
    ACTIONS(283), 7,
      sym_main_keyword,
      sym_build_keyword,
      sym_test_keyword,
      sym_fn_keyword,
      sym_type_keyword,
      sym_pub_keyword,
      sym__ident,
  [2159] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(285), 1,
      sym_paren_close,
    STATE(152), 1,
      sym_declaration_modifier,
    STATE(155), 1,
      sym_param,
    STATE(178), 1,
      sym_ident,
    ACTIONS(155), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2183] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(287), 1,
      sym_paren_close,
    STATE(152), 1,
      sym_declaration_modifier,
    STATE(155), 1,
      sym_param,
    STATE(178), 1,
      sym_ident,
    ACTIONS(155), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2207] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(289), 1,
      sym_paren_close,
    STATE(113), 1,
      sym_param,
    STATE(152), 1,
      sym_declaration_modifier,
    STATE(178), 1,
      sym_ident,
    ACTIONS(155), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2231] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(95), 1,
      sym_pub_keyword,
    ACTIONS(291), 1,
      sym_annotation,
    ACTIONS(293), 1,
      sym_fn_keyword,
    STATE(123), 1,
      aux_sym_function_repeat1,
    STATE(162), 1,
      sym_fn_signature,
    STATE(171), 2,
      sym__fn_modifiers,
      sym_visibility,
  [2254] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      sym__ident,
    STATE(152), 1,
      sym_declaration_modifier,
    STATE(155), 1,
      sym_param,
    STATE(178), 1,
      sym_ident,
    ACTIONS(155), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2275] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(113), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2289] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(131), 1,
      sym__newline,
    ACTIONS(133), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2303] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(107), 1,
      sym__newline,
    ACTIONS(109), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2317] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(295), 6,
      sym_paren_open,
      sym_bracket_open,
      sym_brace_open,
      sym_fn_keyword,
      sym_type_keyword,
      sym__type_ident,
  [2329] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(301), 1,
      sym_paren_close,
    STATE(24), 1,
      sym_comma,
    STATE(129), 1,
      aux_sym_tuple_type_repeat1,
  [2351] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(123), 1,
      sym__newline,
    ACTIONS(125), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2365] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(127), 1,
      sym__newline,
    ACTIONS(129), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2379] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(119), 1,
      sym__newline,
    ACTIONS(121), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2393] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(99), 1,
      sym__newline,
    ACTIONS(101), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2407] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(139), 1,
      sym__newline,
    ACTIONS(141), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2421] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      sym__ident,
    STATE(161), 1,
      sym_declaration_modifier,
    STATE(170), 1,
      sym_ident,
    ACTIONS(155), 3,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
  [2439] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(135), 1,
      sym__newline,
    ACTIONS(137), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2453] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(303), 1,
      sym_paren_close,
    STATE(26), 1,
      sym_comma,
    STATE(114), 1,
      aux_sym_tuple_type_repeat1,
  [2475] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(105), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2489] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(83), 1,
      sym__newline,
    ACTIONS(85), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2503] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(117), 5,
      anon_sym_COMMA,
      sym_question_mark,
      sym_exclamation_mark,
      sym_paren_close,
      sym_brace_close,
  [2517] = 6,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      sym_brace_close,
    ACTIONS(309), 1,
      sym__newline,
    STATE(47), 1,
      aux_sym_struct_repeat1,
    STATE(111), 1,
      aux_sym_struct_repeat2,
  [2536] = 6,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      sym_paren_close,
    ACTIONS(315), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_struct_repeat1,
    STATE(107), 1,
      aux_sym_tuple_struct_repeat1,
  [2555] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(319), 1,
      sym_question_mark,
    ACTIONS(321), 1,
      sym_exclamation_mark,
    ACTIONS(323), 1,
      sym__newline,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2572] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(319), 1,
      sym_question_mark,
    ACTIONS(321), 1,
      sym_exclamation_mark,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(325), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [2589] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(319), 1,
      sym_question_mark,
    ACTIONS(321), 1,
      sym_exclamation_mark,
    ACTIONS(331), 1,
      sym__newline,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [2606] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(335), 1,
      sym__semicolon,
    ACTIONS(338), 1,
      sym__newline,
    STATE(103), 1,
      aux_sym_body_repeat1,
    ACTIONS(333), 2,
      sym_statement,
      sym_brace_close,
  [2623] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(319), 1,
      sym_question_mark,
    ACTIONS(321), 1,
      sym_exclamation_mark,
    ACTIONS(343), 1,
      sym__newline,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [2640] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(345), 1,
      sym_brace_open,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      sym_raw_string_literal,
    STATE(72), 1,
      sym_body,
    STATE(146), 1,
      sym_string_literal,
  [2659] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(353), 1,
      sym__semicolon,
    ACTIONS(355), 1,
      sym__newline,
    STATE(103), 1,
      aux_sym_body_repeat1,
    ACTIONS(351), 2,
      sym_statement,
      sym_brace_close,
  [2676] = 6,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(81), 1,
      sym_paren_close,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_struct_repeat1,
    STATE(108), 1,
      aux_sym_tuple_struct_repeat1,
  [2695] = 6,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      sym_paren_close,
    ACTIONS(366), 1,
      sym__newline,
    STATE(9), 1,
      aux_sym_struct_repeat1,
    STATE(108), 1,
      aux_sym_tuple_struct_repeat1,
  [2714] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(319), 1,
      sym_question_mark,
    ACTIONS(321), 1,
      sym_exclamation_mark,
    ACTIONS(371), 1,
      sym__newline,
    ACTIONS(369), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2731] = 6,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      sym_brace_close,
    ACTIONS(378), 1,
      sym__newline,
    STATE(49), 1,
      aux_sym_struct_repeat1,
    STATE(110), 1,
      aux_sym_struct_repeat2,
  [2750] = 6,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(153), 1,
      sym_brace_close,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym_struct_repeat1,
    STATE(110), 1,
      aux_sym_struct_repeat2,
  [2769] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(385), 1,
      sym__semicolon,
    ACTIONS(387), 1,
      sym_brace_close,
    ACTIONS(389), 1,
      sym__newline,
    STATE(106), 1,
      aux_sym_body_repeat1,
  [2785] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      sym_paren_close,
    STATE(78), 1,
      sym_comma,
    STATE(128), 1,
      aux_sym_param_list_repeat1,
  [2801] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(147), 1,
      sym_paren_close,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_comma,
    STATE(122), 1,
      aux_sym_tuple_type_repeat1,
  [2817] = 4,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(395), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [2831] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      sym_paren_close,
    STATE(81), 1,
      sym_comma,
    STATE(116), 1,
      aux_sym_param_list_repeat1,
  [2847] = 4,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(405), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [2861] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2875] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(409), 1,
      sym_colon,
    ACTIONS(411), 1,
      sym_brace_close,
  [2891] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [2905] = 5,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(385), 1,
      sym__semicolon,
    ACTIONS(389), 1,
      sym__newline,
    ACTIONS(415), 1,
      sym_brace_close,
    STATE(106), 1,
      aux_sym_body_repeat1,
  [2921] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(413), 1,
      sym_paren_close,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      sym_comma,
    STATE(122), 1,
      aux_sym_tuple_type_repeat1,
  [2937] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(420), 1,
      sym_annotation,
    STATE(123), 1,
      aux_sym_function_repeat1,
    ACTIONS(423), 2,
      sym_fn_keyword,
      sym_pub_keyword,
  [2951] = 4,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(427), 2,
      aux_sym_string_literal_token1,
      sym_raw_string_literal,
  [2965] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(429), 4,
      sym_ref_keyword,
      sym_let_keyword,
      sym_mut_keyword,
      sym__ident,
  [2975] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(431), 1,
      sym_colon,
    ACTIONS(433), 1,
      sym_bracket_close,
  [2991] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(435), 1,
      sym_colon,
    ACTIONS(437), 1,
      sym_brace_close,
  [3007] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(287), 1,
      sym_paren_close,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      sym_comma,
    STATE(116), 1,
      aux_sym_param_list_repeat1,
  [3023] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(143), 1,
      sym_paren_close,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      sym_comma,
    STATE(122), 1,
      aux_sym_tuple_type_repeat1,
  [3039] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(439), 1,
      sym_colon,
    ACTIONS(441), 1,
      sym_bracket_close,
  [3055] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [3069] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(445), 1,
      sym_bracket_close,
  [3082] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(447), 1,
      sym_brace_open,
    ACTIONS(449), 1,
      sym_single_arrow,
    STATE(173), 1,
      sym_return_type,
  [3095] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(451), 3,
      sym_colon,
      sym_paren_open,
      sym_brace_open,
  [3104] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(453), 1,
      sym_brace_close,
  [3117] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(455), 1,
      sym_brace_close,
  [3130] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(299), 1,
      sym_exclamation_mark,
    ACTIONS(457), 1,
      sym_bracket_close,
  [3143] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 1,
      sym_question_mark,
    ACTIONS(459), 1,
      sym_exclamation_mark,
    ACTIONS(461), 1,
      sym_brace_open,
  [3156] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(463), 1,
      sym_statement,
    ACTIONS(465), 1,
      sym_brace_close,
    STATE(142), 1,
      aux_sym_body_repeat2,
  [3169] = 4,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(385), 1,
      sym__semicolon,
    ACTIONS(389), 1,
      sym__newline,
    STATE(106), 1,
      aux_sym_body_repeat1,
  [3182] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(467), 1,
      sym__newline,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      sym_brace_close,
  [3193] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(469), 1,
      sym_statement,
    ACTIONS(471), 1,
      sym_brace_close,
    STATE(145), 1,
      aux_sym_body_repeat2,
  [3206] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(449), 1,
      sym_single_arrow,
    ACTIONS(473), 1,
      sym_brace_open,
    STATE(179), 1,
      sym_return_type,
  [3219] = 3,
    ACTIONS(79), 1,
      sym__comment,
    ACTIONS(475), 1,
      sym__newline,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [3230] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(477), 1,
      sym_statement,
    ACTIONS(480), 1,
      sym_brace_close,
    STATE(145), 1,
      aux_sym_body_repeat2,
  [3243] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(345), 1,
      sym_brace_open,
    STATE(61), 1,
      sym_body,
  [3253] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(345), 1,
      sym_brace_open,
    STATE(69), 1,
      sym_body,
  [3263] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(345), 1,
      sym_brace_open,
    STATE(55), 1,
      sym_body,
  [3273] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(345), 1,
      sym_brace_open,
    STATE(74), 1,
      sym_body,
  [3283] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(482), 1,
      sym__ident,
    STATE(165), 1,
      sym_ident,
  [3293] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(51), 1,
      sym_type_ident,
  [3303] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(482), 1,
      sym__ident,
    STATE(176), 1,
      sym_ident,
  [3313] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(484), 2,
      sym_brace_open,
      sym_single_arrow,
  [3321] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(486), 2,
      sym_brace_open,
      sym_single_arrow,
  [3329] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      sym_paren_close,
  [3337] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(482), 1,
      sym__ident,
    STATE(170), 1,
      sym_ident,
  [3347] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(345), 1,
      sym_brace_open,
    STATE(71), 1,
      sym_body,
  [3357] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(488), 1,
      sym_paren_open,
    STATE(133), 1,
      sym_param_list,
  [3367] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(490), 2,
      sym_brace_open,
      sym_single_arrow,
  [3375] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(492), 1,
      sym_fn_keyword,
    ACTIONS(494), 1,
      sym_type_keyword,
  [3385] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(482), 1,
      sym__ident,
    STATE(168), 1,
      sym_ident,
  [3395] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(345), 1,
      sym_brace_open,
    STATE(64), 1,
      sym_body,
  [3405] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(63), 1,
      sym__type_ident,
    STATE(50), 1,
      sym_type_ident,
  [3415] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(482), 1,
      sym__ident,
    STATE(158), 1,
      sym_ident,
  [3425] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(488), 1,
      sym_paren_open,
    STATE(143), 1,
      sym_param_list,
  [3435] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(496), 2,
      sym_brace_open,
      sym_single_arrow,
  [3443] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(498), 1,
      sym_colon,
  [3450] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(500), 1,
      sym_colon,
  [3457] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(502), 1,
      sym_brace_open,
  [3464] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(504), 1,
      sym_colon,
  [3471] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(506), 1,
      sym_fn_keyword,
  [3478] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(508), 1,
      sym_brace_open,
  [3485] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(510), 1,
      sym_brace_open,
  [3492] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(512), 1,
      sym__ident,
  [3499] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
  [3506] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(516), 1,
      sym_colon,
  [3513] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(518), 1,
      sym_brace_open,
  [3520] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(520), 1,
      sym_colon,
  [3527] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(447), 1,
      sym_brace_open,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 271,
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
  [SMALL_STATE(45)] = 1480,
  [SMALL_STATE(46)] = 1512,
  [SMALL_STATE(47)] = 1544,
  [SMALL_STATE(48)] = 1583,
  [SMALL_STATE(49)] = 1622,
  [SMALL_STATE(50)] = 1658,
  [SMALL_STATE(51)] = 1678,
  [SMALL_STATE(52)] = 1698,
  [SMALL_STATE(53)] = 1724,
  [SMALL_STATE(54)] = 1747,
  [SMALL_STATE(55)] = 1777,
  [SMALL_STATE(56)] = 1794,
  [SMALL_STATE(57)] = 1811,
  [SMALL_STATE(58)] = 1828,
  [SMALL_STATE(59)] = 1849,
  [SMALL_STATE(60)] = 1866,
  [SMALL_STATE(61)] = 1883,
  [SMALL_STATE(62)] = 1900,
  [SMALL_STATE(63)] = 1917,
  [SMALL_STATE(64)] = 1934,
  [SMALL_STATE(65)] = 1951,
  [SMALL_STATE(66)] = 1968,
  [SMALL_STATE(67)] = 1985,
  [SMALL_STATE(68)] = 2006,
  [SMALL_STATE(69)] = 2023,
  [SMALL_STATE(70)] = 2040,
  [SMALL_STATE(71)] = 2057,
  [SMALL_STATE(72)] = 2074,
  [SMALL_STATE(73)] = 2091,
  [SMALL_STATE(74)] = 2108,
  [SMALL_STATE(75)] = 2125,
  [SMALL_STATE(76)] = 2142,
  [SMALL_STATE(77)] = 2159,
  [SMALL_STATE(78)] = 2183,
  [SMALL_STATE(79)] = 2207,
  [SMALL_STATE(80)] = 2231,
  [SMALL_STATE(81)] = 2254,
  [SMALL_STATE(82)] = 2275,
  [SMALL_STATE(83)] = 2289,
  [SMALL_STATE(84)] = 2303,
  [SMALL_STATE(85)] = 2317,
  [SMALL_STATE(86)] = 2329,
  [SMALL_STATE(87)] = 2351,
  [SMALL_STATE(88)] = 2365,
  [SMALL_STATE(89)] = 2379,
  [SMALL_STATE(90)] = 2393,
  [SMALL_STATE(91)] = 2407,
  [SMALL_STATE(92)] = 2421,
  [SMALL_STATE(93)] = 2439,
  [SMALL_STATE(94)] = 2453,
  [SMALL_STATE(95)] = 2475,
  [SMALL_STATE(96)] = 2489,
  [SMALL_STATE(97)] = 2503,
  [SMALL_STATE(98)] = 2517,
  [SMALL_STATE(99)] = 2536,
  [SMALL_STATE(100)] = 2555,
  [SMALL_STATE(101)] = 2572,
  [SMALL_STATE(102)] = 2589,
  [SMALL_STATE(103)] = 2606,
  [SMALL_STATE(104)] = 2623,
  [SMALL_STATE(105)] = 2640,
  [SMALL_STATE(106)] = 2659,
  [SMALL_STATE(107)] = 2676,
  [SMALL_STATE(108)] = 2695,
  [SMALL_STATE(109)] = 2714,
  [SMALL_STATE(110)] = 2731,
  [SMALL_STATE(111)] = 2750,
  [SMALL_STATE(112)] = 2769,
  [SMALL_STATE(113)] = 2785,
  [SMALL_STATE(114)] = 2801,
  [SMALL_STATE(115)] = 2817,
  [SMALL_STATE(116)] = 2831,
  [SMALL_STATE(117)] = 2847,
  [SMALL_STATE(118)] = 2861,
  [SMALL_STATE(119)] = 2875,
  [SMALL_STATE(120)] = 2891,
  [SMALL_STATE(121)] = 2905,
  [SMALL_STATE(122)] = 2921,
  [SMALL_STATE(123)] = 2937,
  [SMALL_STATE(124)] = 2951,
  [SMALL_STATE(125)] = 2965,
  [SMALL_STATE(126)] = 2975,
  [SMALL_STATE(127)] = 2991,
  [SMALL_STATE(128)] = 3007,
  [SMALL_STATE(129)] = 3023,
  [SMALL_STATE(130)] = 3039,
  [SMALL_STATE(131)] = 3055,
  [SMALL_STATE(132)] = 3069,
  [SMALL_STATE(133)] = 3082,
  [SMALL_STATE(134)] = 3095,
  [SMALL_STATE(135)] = 3104,
  [SMALL_STATE(136)] = 3117,
  [SMALL_STATE(137)] = 3130,
  [SMALL_STATE(138)] = 3143,
  [SMALL_STATE(139)] = 3156,
  [SMALL_STATE(140)] = 3169,
  [SMALL_STATE(141)] = 3182,
  [SMALL_STATE(142)] = 3193,
  [SMALL_STATE(143)] = 3206,
  [SMALL_STATE(144)] = 3219,
  [SMALL_STATE(145)] = 3230,
  [SMALL_STATE(146)] = 3243,
  [SMALL_STATE(147)] = 3253,
  [SMALL_STATE(148)] = 3263,
  [SMALL_STATE(149)] = 3273,
  [SMALL_STATE(150)] = 3283,
  [SMALL_STATE(151)] = 3293,
  [SMALL_STATE(152)] = 3303,
  [SMALL_STATE(153)] = 3313,
  [SMALL_STATE(154)] = 3321,
  [SMALL_STATE(155)] = 3329,
  [SMALL_STATE(156)] = 3337,
  [SMALL_STATE(157)] = 3347,
  [SMALL_STATE(158)] = 3357,
  [SMALL_STATE(159)] = 3367,
  [SMALL_STATE(160)] = 3375,
  [SMALL_STATE(161)] = 3385,
  [SMALL_STATE(162)] = 3395,
  [SMALL_STATE(163)] = 3405,
  [SMALL_STATE(164)] = 3415,
  [SMALL_STATE(165)] = 3425,
  [SMALL_STATE(166)] = 3435,
  [SMALL_STATE(167)] = 3443,
  [SMALL_STATE(168)] = 3450,
  [SMALL_STATE(169)] = 3457,
  [SMALL_STATE(170)] = 3464,
  [SMALL_STATE(171)] = 3471,
  [SMALL_STATE(172)] = 3478,
  [SMALL_STATE(173)] = 3485,
  [SMALL_STATE(174)] = 3492,
  [SMALL_STATE(175)] = 3499,
  [SMALL_STATE(176)] = 3506,
  [SMALL_STATE(177)] = 3513,
  [SMALL_STATE(178)] = 3520,
  [SMALL_STATE(179)] = 3527,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(80),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(148),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(149),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(105),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(150),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(151),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(85),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(134),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_type, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_type, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ident, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_ident, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_type, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_type, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_type, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_type, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_item, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_item, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_dict_type, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_dict_type, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_type, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_type, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_prelude, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_prelude, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_prelude, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_prelude, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_struct, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_struct, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 1),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(58),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(58),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comma, 1),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(67),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(67),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_point, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_point, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_struct, 6),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_struct, 6),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(103),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(103),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_struct_repeat1, 2), SHIFT_REPEAT(9),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_struct_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_struct_repeat1, 2), SHIFT_REPEAT(9),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 1),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat2, 2), SHIFT_REPEAT(49),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_repeat2, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat2, 2), SHIFT_REPEAT(49),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(115),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(66),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2), SHIFT_REPEAT(66),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(123),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat2, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_struct_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(140),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn_modifiers, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 5),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_modifier, 1),
  [514] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
