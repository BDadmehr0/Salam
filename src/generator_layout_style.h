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

#ifndef _GENERATOR_LAYOUT_STYLE_H_
#define _GENERATOR_LAYOUT_STYLE_H_

#include <stddef.h>

#include "ast.h"
#include "ast_layout.h"
#include "ast_layout_style.h"
#include "base.h"
#include "generator.h"
#include "memory.h"
#include "string_buffer.h"

/**
 *
 * @function generator_code_layout_pseudo_elements
 * @brief Generate the CSS code for the layout block pseudo elements
 * @params {generator_t*} generator - Generator
 * @params {ast_layout_block_t*} block - Layout block
 * @params {size_t*} css_attributes_length - CSS attributes length
 * @returns {string_t*}
 *
 */
string_t *generator_code_layout_pseudo_elements(generator_t *generator,
                                                ast_layout_block_t *block,
                                                size_t *css_attributes_length);

/**
 *
 * @function generator_code_layout_attribute_style_state_enduser_name_to_type
 * @brief Convert style attribute state enduser name to type
 * @params {char*} name - Name
 * @returns {ast_layout_attribute_style_state_type} type - Type
 *
 */
ast_layout_attribute_style_state_type
generator_code_layout_attribute_style_state_enduser_name_to_type(char *name);

/**
 *
 * @function generator_code_layout_styles
 * @brief Generate the CSS code for the layout block
 * @params {hashmap_layout_attribute_t*} styles - Styles
 * @params {ast_layout_block_t*} block - Layout block
 * @params {size_t*} css_attributes_length - CSS attributes length
 * @returns {string_t*}
 *
 */
string_t *generator_code_layout_styles(hashmap_layout_attribute_t *styles,
                                       ast_layout_block_t *block,
                                       size_t *css_attributes_length);

/**
 *
 * @function generator_code_layout_attribute_style_state_type_to_generated_name
 * @brief Convert style attribute state type to generated name
 * @params {ast_layout_attribute_style_state_type} type - Style Attribute State
 * Type
 * @returns {char*} name - Name
 *
 */
char *generator_code_layout_attribute_style_state_type_to_generated_name(
    ast_layout_attribute_style_state_type type);

#endif
