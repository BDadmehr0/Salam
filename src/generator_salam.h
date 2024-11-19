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

#ifndef _GENERATOR_SALAM_H_
#define _GENERATOR_SALAM_H_

#include "ast.h"
#include "generator.h"
#include "generator_salam.h"
#include "string_buffer.h"

/**
 *
 * @function generator_salam
 * @brief Generate the Salam code (cleaned and formatted)
 * @params {ast_t*} ast - AST
 * @returns {string_t*}
 *
 */
string_t* generator_salam(ast_t* ast);

/**
 *
 * @function generator_salam_layout
 * @brief Generate the Salam code for the layout
 * @params {ast_layout_t*} layout - Layout
 * @returns {void}
 *
 */
void generator_salam_layout(string_t* salam, ast_layout_t* layout);

/**
 *
 * @function generator_salam_layout_block
 * @brief Generate the Salam code for the layout block
 * @params {ast_layout_block_t*} block - Layout block
 * @returns {void}
 *
 */
void generator_salam_layout_block(string_t* salam, ast_layout_block_t* block);

/**
 *
 * @function generator_salam_layout_attribute
 * @brief Generate the Salam code for the attribute
 * @params {string_t*} salam - Buffer
 * @params {ast_layout_attribute_t*} attribute - Attribute
 * @returns {void}
 *
 */
void generator_salam_layout_attribute(string_t* salam,
                                      ast_layout_attribute_t* attribute);

/**
 *
 * @function generator_salam_layout_attributes
 * @brief Generate the Salam code for the attributes
 * @params {string_t*} salam - Buffer
 * @params {hashmap_t*} attributes - Attributes
 * @returns {void}
 *
 */
void generator_salam_layout_attributes(string_t* salam, hashmap_t* attributes);

/**
 *
 * @function generator_salam_layout_styles
 * @brief Generate the Salam code for the styles
 * @params {string_t*} salam - Buffer
 * @params {hashmap_t*} styles - Styles
 * @returns {void}
 *
 */
void generator_salam_layout_styles(string_t* salam,
                                   ast_layout_style_state_t* styles);

/**
 *
 * @function generator_salam_layout_states
 * @brief Generate the Salam code for the states
 * @params {string_t*} buffer - Buffer
 * @params {hashmap_t*} states - States
 * @returns {void}
 *
 */
void generator_salam_layout_states(string_t* buffer, hashmap_t* states);

/**
 *
 * @function generator_salam_ident
 * @brief Generate the Salam code for the indentation
 * @params {string_t*} buffer - Buffer
 * @params {size_t} ident - Indentation
 * @returns {void}
 *
 */
void generator_salam_ident(string_t* buffer, size_t ident);

/**
 *
 * @function generator_salam_layout_attributes_styles
 * @brief Generate the Salam code for the attributes styles
 * @params {string_t*} salam - Buffer
 * @params {hashmap_t*} attributes - Attributes styles
 * @returns {void}
 *
 */
void generator_salam_layout_attributes_styles(string_t* salam,
                                              hashmap_t* attributes);

/**
 *
 * @function generator_salam_layout_node
 * @brief Generate the Salam code for the layout node
 * @params {string_t*} salam - Buffer
 * @params {ast_layout_node_t*} node - Layout node
 * @returns {void}
 *
 */
void generator_salam_layout_node(string_t* salam, ast_layout_node_t* node);

/**
 *
 * @function generator_salam_layout_children
 * @brief Generate the Salam code for the layout children
 * @params {string_t*} salam - Buffer
 * @params {array_node_layout_t*} children - Children
 * @returns {void}
 *
 */
void generator_salam_layout_children(string_t* salam,
                                     array_node_layout_t* children);

#endif
