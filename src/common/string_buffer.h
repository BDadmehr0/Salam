/**
 * ---------------------------------------------------------------------------
 * Salam Programming Language
 * ---------------------------------------------------------------------------
 *
 * Welcome to the Salam Programming Language! Salam is a modern, efficient,
 * and developer-friendly language created to inspire and empower programmers
 * of all ages. With its unique features and Persian roots, Salam aims to make
 * programming more accessible and enjoyable for everyone.
 *
 * This file is part of the core implementation of Salam, including its runtime
 * and compiler components. By contributing to or using this codebase, you are
 * part of a growing community dedicated to innovation and inclusivity in
 * programming.
 *
 * Explore Salam further:
 * - Website: https://www.salamlang.ir/
 * - GitHub: https://github.com/SalamLang/Salam
 *
 * Thank you for being part of this journey!
 * ---------------------------------------------------------------------------
 */

#ifndef _COMMON_STRING_BUFFER_H_
#define _COMMON_STRING_BUFFER_H_

#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>

#include "base.h"
#include "../lexer/digit.h"
#include "memory.h"

typedef struct {
    size_t capacity;
    size_t length;
    char *data;

    void (*print)(void *);
    void (*destroy)(void *);
} string_t;

/**
 *
 * @function string_create
 * @brief Create a string
 * @params {size_t} initial_capacity - Initial size of the string
 * @returns {string_t*}
 *
 */
string_t *string_create(size_t initial_capacity);

/**
 *
 * @function string_append_char_begin
 * @brief Append a character to the beginning of the string
 * @params {string_t*} str - String
 * @params {char} c - Character
 * @returns {void}
 *
 */
void string_append_char_begin(string_t *str, char c);

/**
 *
 * @function string_append_str_begin
 * @brief Append a string to the beginning of the string
 * @params {string_t*} str - String
 * @params {const char*} prefix - Prefix
 * @returns {void}
 *
 */
void string_append_str_begin(string_t *str, const char *prefix);

/**
 *
 * @function string_append_char
 * @brief Append a character to the end of the string
 * @params {string_t*} str - String
 * @params {char} c - Character
 * @returns {void}
 *
 */
void string_append_char(string_t *str, char c);

/**
 *
 * @function string_append_str
 * @brief Append a string to the end of the string
 * @params {string_t*} str - String
 * @params {const char*} suffix - Suffix
 * @returns {void}
 *
 */
void string_append_str(string_t *str, const char *suffix);

/**
 *
 * @function string_destroy
 * @brief Free a string
 * @params {string_t*} str - String
 * @returns {void}
 *
 */
void string_destroy(string_t *str);

/**
 *
 * @function string_print
 * @brief Print a string
 * @params {string_t*} str - String
 * @returns {void}
 *
 */
void string_print(string_t *str);

/**
 *
 * @function string_set
 * @brief Set the value of a string
 * @params {string_t*} str - String
 * @params {string_t*} value - Value
 * @returns {void}
 *
 */
void string_set(string_t *str, string_t *value);

/**
 *
 * @function string_set_str
 * @brief Set the value of a string
 * @params {string_t*} str - String
 * @params {const char*} value - Value
 * @returns {void}
 *
 */
void string_set_str(string_t *str, const char *value);

/**
 *
 * @function string_append
 * @brief Append a string to the end of the string
 * @params {c*} str - String
 * @params {string_t*} value - Value
 * @returns {void}
 *
 */
void string_append(string_t *str, const string_t *value);

/**
 *
 * @function string_lower_str
 * @brief Convert a string to lowercase
 * @params {const char*} str - String
 * @returns {char*} - Lowercase string
 *
 */
char *string_lower_str(const char *str);

/**
 *
 * @function string_upper_str
 * @brief Convert a string to uppercase
 * @params {const char*} str - String
 * @returns {char*} - Uppercase string
 *
 */
char *string_upper_str(const char *str);

/**
 *
 * @function replace_all_substrings
 * @brief Replace all substrings in a string
 * @params {const char*} str - String
 * @params {const char*} old_substr - Old substring
 * @params {const char*} new_substr - New substring
 * @returns {char*} - New string
 *
 */
char *replace_all_substrings(const char *str, const char *old_substr,
                             const char *new_substr);

/**
 *
 * @function string_is
 * @brief Check if two strings are equal
 * @params {string_t*} str1 - String 1
 * @params {const char*} str2 - String 2
 * @returns {bool}
 *
 */
bool string_is(string_t *str1, const char *str2);

/**
 *
 * @function string_equals
 * @brief Check if two strings are equal
 * @params {string_t*} str1 - String 1
 * @params {string_t*} str2 - String 2
 * @returns {bool}
 *
 */
bool string_equals(string_t *str1, string_t *str2);

/**
 *
 * @function string_compare
 * @brief Compare two strings
 * @params {string_t*} str1 - String 1
 * @params {string_t*} str2 - String 2
 * @returns {bool}
 *
 */
bool string_compare(string_t *str1, string_t *str2);

/**
 *
 * @function is_utf8_continuation_byte
 * @brief Check if a byte is a UTF-8 continuation byte
 * @params {char} c The byte to check
 * @returns {bool} True if the byte is a continuation byte, false otherwise
 *
 */
bool is_utf8_continuation_byte(char c);

/**
 *
 * @function is_valid_utf8
 * @brief Check if a string is a valid UTF-8 sequence
 * @params {const char*} str The string to check
 * @returns {bool} True if the string is a valid UTF-8 sequence, false otherwise
 *
 */
bool is_valid_utf8(const char *str);

/**
 *
 * @function is_char_alpha
 * @brief Check if a character is an alphabet
 * @params {char} c - Character
 * @returns {bool} True if the character is alphabetic, false otherwise
 *
 */
bool is_char_alpha(const char c);

/**
 *
 * @function is_schar_alpha
 * @brief Check if a character is an alphabet
 * @params {char} c - Character
 * @returns {bool}
 *
 */
bool is_schar_alpha(const char *c);

/**
 *
 * @function is_char_alnum
 * @brief Check if a character is an alphabet or a digit
 * @params {char} c - Character
 * @returns {bool}
 *
 */
bool is_char_alnum(char c);

/**
 *
 * @function is_char_whitespace
 * @brief Check if a character is a whitespace
 * @params {char} c - Character
 * @returns {bool}
 *
 */
bool is_char_whitespace(char c);

/**
 *
 * @function int2string
 * @brief Convert an integer to a string
 * @params {int} value - Integer value
 * @returns {char*}
 *
 */
char *int2string(int value);

/**
 *
 * @function float2string
 * @brief Convert a float to a string
 * @params {float} value - Float value
 * @returns {char*}
 *
 */
char *float2string(float value);

/**
 *
 * @function double2string
 * @brief Convert a double to a string
 * @params {double} value - Double value
 * @returns {char*}
 *
 */
char *double2string(double value);

/**
 *
 * @function string_destroy_and_get
 * @brief Free a string and return the string data
 * @params {string_t*} str - String
 * @returns {char*}
 *
 */
char *string_destroy_and_get(string_t *str);

/**
 *
 * @function utf8_char_length
 * @brief Get the length of a UTF-8 character
 * @params {char} c - UTF-8 character
 * @returns {size_t} Length of the character
 *
 */
size_t utf8_char_length(char c);

/**
 *
 * @function utf8_decode
 * @brief Decode a UTF-8 character
 * @params {const char*} source - Source string
 * @params {size_t*} index - Index of the character
 * @returns {uint32_t} Decoded character
 *
 */
uint32_t utf8_decode(const char *source, size_t *index);

/**
 *
 * @function utf8_char_length
 * @brief Get the UTF-8 character and return the length
 * @params {char*} source - Source code
 * @params {size_t*} index - Index of the current character in source string
 * @params {size_t*} num_bytes - Number of bytes
 * @returns {int}
 *
 */
char *char_utf8_decode(char *source, size_t *index, size_t *num_bytes);

/**
 *
 * @function is_wchar_alpha
 * @brief Check if a wide character is alphabetic
 * @params {uint32_t} codepoint - Wide character
 * @returns {bool} True if the character is alphabetic, false otherwise
 *
 */
bool is_wchar_alpha(uint32_t codepoint);

/**
 *
 * @function is_wchar_digit
 * @brief Check if a wide character is a digit
 * @params {uint32_t} codepoint - Wide character
 * @returns {bool} True if the character is a digit, false otherwise
 *
 */
bool is_wchar_digit(uint32_t codepoint);

/**
 *
 * @function convert_to_english_digit
 * @brief Convert a wide character to an English digit
 * @params {wchar_t} ch - Wide character
 * @returns {char} English digit
 *
 */
char convert_to_english_digit(wchar_t ch);

/**
 *
 * @function string_number2number
 * @brief Convert digits in a string to English digits
 * @params {char*} str - Input string
 * @returns {void}
 *
 */
void string_number2number(char *str);

/**
 *
 * @function string_append_wchar
 * @brief Append a wide character to the end of the string
 * @params {string_t*} str - String
 * @params {wchar_t} c - Wide character
 * @returns {void}
 *
 */
void string_append_wchar(string_t *str, wchar_t c);

/**
 *
 * @function utf8_strlen
 * @brief Get the length of a UTF-8 string
 * @params {const char*} str - UTF-8 string
 * @returns {size_t} Length of the string
 *
 */
size_t utf8_strlen(const char *str);

/**
 *
 * @function mb2strlen
 * @brief Get the length of a multibyte string
 * @params {const char*} identifier - Multibyte string
 * @returns {size_t} Length of the string
 *
 */
size_t mb2strlen(const char *identifier);

/**
 *
 * @function is_english_digit
 * @brief Check if a UTF-8 string is an Persian/Arabic/English digit
 * @params {char*} utf8 - UTF-8 string
 * @returns {bool} True if the string is a Persian/Arabic/English digit, false
 * otherwise
 *
 */
bool is_utf8_digit(char *utf8);

/**
 *
 * @function is_utf8_alpha
 * @brief Check if a UTF-8 string is an alphabet
 * @params {char*} utf8 - UTF-8 string
 * @returns {bool} True if the string is an alphabet, false otherwise
 *
 */
bool is_utf8_alpha(char *utf8);

/**
 *
 * @function convert_utf8_to_english_digit
 * @brief Convert a UTF-8 string to an English digit
 * @params {char*} uc - UTF-8 string
 * @returns {char} English digit
 *
 */
char convert_utf8_to_english_digit(char *uc);

/**
 *
 * @function mb2strlen
 * @brief Get the length of a multibyte string
 * @params {const char*} identifier - Multibyte string
 * @returns {size_t} Length of the string
 *
 */
size_t mb2strlen(const char *identifier);

/**
 *
 * @function string_ends
 * @brief Detect if a string ends with another string
 * @params {const char*} source - Input string
 * @params {const char*} search - Search string
 * @returns {bool} ends with it or not
 *
 */
bool string_ends(const char *source, const char *search);

/**
 *
 * @function string_starts
 * @brief Detect if a string starts with another string
 * @params {const char*} source - Input string
 * @params {const char*} search - Search string
 * @returns {bool} ends with it or not
 *
 */
bool string_starts(const char *source, const char *search);

/**
 *
 * @function string_create_from
 * @brief Create a string from a substring
 * @params {const char*} data - Data
 * @params {size_t} start - Start index
 * @params {size_t} end - End index
 * @returns {string_t*}
 *
 */
string_t *string_create_from(const char *data, size_t start, size_t end);

/**
 *
 * @function string_strdup
 * @brief My wrapper for strdup function to support old compilers
 * @params {const char*} source - Source string
 * @returns {char*}
 *
 */
char *string_strdup(const char *source);

/**
 *
 * @function my_strcasecmp
 * @brief Custom wrapper for strcasecmp function to support old compilers
 * @params {const char*} s1 - First string
 * @params {const char*} s2 - Second string
 * @returns {int} - Comparison result
 *
 */
int my_strcasecmp(const char *s1, const char *s2);

/**
 *
 * @function string_arabic2persian
 */
char *string_arabic2persian(const char *arabic);

#endif
