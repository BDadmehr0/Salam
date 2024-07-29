bool debug_enabled = true;

#ifndef MB_CUR_MAX
	#define MB_CUR_MAX (MB_LEN_MAX)
#endif

#define print_error(fmt, ...) fprintf(stderr, fmt, ##__VA_ARGS__)

#define print_message(fmt, ...) if (debug_enabled) fprintf(stdout, fmt, ##__VA_ARGS__)

#define CREATE_MEMORY_OBJECT(result, type, length, fmt, ...) \
	result = (type *)malloc(sizeof(type) * (length));  \
	if (!result) { \
		fprintf(stderr, fmt,  __VA_ARGS__);\
		exit(EXIT_FAILURE); \
	}

struct ast_expression;

struct ast_literal_t;

typedef enum {
	MESSAGE_NAME,
	MESSAGE_ENTRY_POINT_FUNCTION_NAME,
	MESSAGE_WELCOME,
	MESSAGE_LEXER_UNEXPECTED_CHAR,
	MESSAGE_LEXER_COMMENT_MULTI_NOT_CLOSED,
	MESSAGE_LEXER_NUMBER_FLOAT_NEED_NUMBER_AFTER_DOT,
	MESSAGE_LEXER_TOKEN_UNREAD_UNICODE,
	MESSAGE_LEXER_TOKEN_READ_UNICODE,
	MESSAGE_LEXER_STRING_READ_MEMORY,
	MESSAGE_LEXER_STRING_UNKNOWN_ESCAPE,
	MESSAGE_LEXER_STRING_CONVERT_MULTIBYTE,
	MESSAGE_LEXER_STRING_GET_LENGTH_UNICODE,
	MESSAGE_LEXER_IDENTIFIER_CONVERT_MULTIBYTE,
	MESSAGE_LEXER_CHAR_LENGTH_ISSUE,
	MESSAGE_LEXER_ARRAY_NOT_CLOSED,
	MESSAGE_PARSER_UNEXPECTED_TOKEN,
	MESSAGE_PARSER_BLOCK_MEMORY_ISSUE,
	MESSAGE_PARSER_BAD_TOKEN_AS_STATEMENT,
	MESSAGE_TOKEN_TRUE,
	MESSAGE_TOKEN_FALSE,
	MESSAGE_TOKEN_NULL,
	MESSAGE_TOKEN_UNKNOWN,
	MESSAGE_TOKEN_NUMBER_INT,
	MESSAGE_TOKEN_NUMBER_FLOAT,
	MESSAGE_TOKEN_BOOL,
	MESSAGE_TOKEN_STRING,
	MESSAGE_TOKEN_ARRAY,
	MESSAGE_TOKEN_OR,
	MESSAGE_TOKEN_AND,
	MESSAGE_TOKEN_FUNCTION_TYPE,
	MESSAGE_TOKEN_FUNCTION_EVEN,
	MESSAGE_TOKEN_FUNCTION_ODD,
	MESSAGE_TOKEN_FUNCTION_READ,
	MESSAGE_TOKEN_FUNCTION_LENGTH,
	MESSAGE_TOKEN_FUNCTION_STRING,
	MESSAGE_INTERPRETER_FUNCTION_CALL_FIRST_ARGUMENT_SHOULD_BE_ONLY_A_STRING,
	MESSAGE_LEXER_FILE_NOT_EXISTS,
	MESSAGE_MEMORY_ALLOCATE_ERROR,
	MESSAGE_MEMORY_REALLOCATE_ERROR,
	MESSAGE_INTERPRETER_MAIN_RETURN_CODE,
	MESSAGE_INTERPRETER_UNKNOWN_NODE_AS_INTERPRETER_ONCE,
	MESSAGE_COUNT,
} message_key_t;

typedef enum {
	LANGUAGE_PERSIAN,
	// LANGUAGE_ARABIC,
	LANGUAGE_COUNT,
} language_t;

typedef enum {
	VALUE_TYPE_NULL,
	VALUE_TYPE_INT,
	VALUE_TYPE_FLOAT,
	VALUE_TYPE_BOOL,
	VALUE_TYPE_STRING,
	VALUE_TYPE_ARRAY_LITERAL,
	VALUE_TYPE_ARRAY_EXPRESSION,
} ast_literal_type_t;

typedef struct {
	char* name;
	struct ast_expression_t* value;
} ast_argument_t;

typedef struct {
	size_t size;
	size_t length;
	void** data;
} array_t;

typedef struct ast_literal_t {
	ast_literal_type_t type;
	union {
		int int_value;
		bool bool_value;
		float float_value;
		char* string_value;
	};

	size_t size_value;
	struct ast_expression_t** array_expression_value;
	struct ast_literal_t** array_literal_value;

	struct ast_expression_t** main; // To have a reference into parser ast so we can free it later after interpreter
} ast_literal_t;

typedef struct SymbolTableEntry {
	char* identifier;
	ast_literal_t* data;
	ast_literal_t* prevdata;
	struct SymbolTableEntry* next;
} SymbolTableEntry;

typedef struct {
	SymbolTableEntry** entries;
	size_t size;
	size_t capacity;
} SymbolTable;

typedef struct SymbolTableStack {
	SymbolTable* table;
	bool is_function_call;
	struct SymbolTableStack* next;
} SymbolTableStack;

typedef enum {
	// Values
	TOKEN_TYPE_IDENTIFIER,
	TOKEN_TYPE_INT,
	TOKEN_TYPE_FLOAT,
	TOKEN_TYPE_STRING,
	
	// Keywords
	TOKEN_TYPE_PAGE, // صفحه
	TOKEN_TYPE_END, // خاتمه
	TOKEN_TYPE_FUNCTION, // تابع
	TOKEN_TYPE_RETURN, // برگشت
	TOKEN_TYPE_BREAK, // توقف
	TOKEN_TYPE_CONTINUE, // ادامه
	TOKEN_TYPE_PRINT, // نمایش
	TOKEN_TYPE_IF, // اگر
	TOKEN_TYPE_NULL, // پوچ
	TOKEN_TYPE_UNTIL, // تا
	TOKEN_TYPE_REPEAT, // تکرار
	TOKEN_TYPE_TRUE, // درست
	TOKEN_TYPE_FALSE, // غلط
	TOKEN_TYPE_ELSEIF, // واگرنه
	TOKEN_TYPE_AND, // و
	TOKEN_TYPE_OR, // یا

	// Symbols
	TOKEN_TYPE_SECTION_OPEN, // {
	TOKEN_TYPE_SECTION_CLOSE, // }
	TOKEN_TYPE_PARENTHESE_OPEN, // (
	TOKEN_TYPE_PARENTHESE_CLOSE, // )
	TOKEN_TYPE_BRACKETS_OPEN, // [
	TOKEN_TYPE_BRACKETS_CLOSE, // ]

	TOKEN_TYPE_PLUS, // +
	TOKEN_TYPE_COLON, // :
	TOKEN_TYPE_DOT, // .
	TOKEN_TYPE_SHARP, // #
	TOKEN_TYPE_MINUS, // -
	TOKEN_TYPE_MULTIPLY, // *
	TOKEN_TYPE_DIVIDE, // /
	TOKEN_TYPE_MODULE, // %
	TOKEN_TYPE_COMMA, // ,
	TOKEN_TYPE_EQUAL, // =
	TOKEN_TYPE_EQUAL_EQUAL, // ==
	TOKEN_TYPE_NOT_EQUAL, // !=
	TOKEN_TYPE_NOT, // !
	TOKEN_TYPE_LESS_THAN, // <
	TOKEN_TYPE_GREATER_THAN, // >
	TOKEN_TYPE_LESS_THAN_EQUAL, // <=
	TOKEN_TYPE_GREATER_THAN_EQUAL, // >=

	// Others
	TOKEN_TYPE_EOF,
	TOKEN_TYPE_ERROR,
} token_type_t;

typedef struct {
	const char* keyword;
	token_type_t token_type;
} keyword_mapping_t;

typedef struct {
	token_type_t type;
	char* value;
	struct {
		size_t length;
		size_t line;
		size_t column;
		size_t end_line;
		size_t end_column;
	} location;
} token_t;

typedef struct {
	char* data;
	size_t length;
	size_t index;
	size_t line;
	size_t column;

	array_t* tokens;
	size_t last_index;
	size_t last_line;
	size_t last_column;
} lexer_t;

struct ast_node;

typedef struct {
	char* name;
	struct ast_node* body;
	array_t* arguments;
} ast_function_declaration_t;

typedef struct {
	struct ast_expression_t* expression;
	struct ast_literal_t* expression_value;
} ast_statement_return_t;

typedef struct {
	struct ast_expression_t* expression;
	struct ast_literal_t* expression_value;
} ast_statement_print_t;

typedef struct {
	struct ast_node** statements;
	size_t num_statements;
} ast_block_t;

typedef struct {
	char* name;
} ast_identifier_t;

typedef struct {
	char* operator;
	struct ast_expression_t* left;
	struct ast_expression_t* right;
} ast_expression_binary_t;

typedef struct {
	struct ast_expression_t* left;
	struct ast_expression_t* right;
} ast_expression_assignment_t;

typedef enum {
	AST_EXPRESSION_ERROR,
	AST_EXPRESSION_VALUE,
	AST_EXPRESSION_LITERAL,
	AST_EXPRESSION_IDENTIFIER,
	AST_EXPRESSION_BINARY,
	AST_EXPRESSION_ASSIGNMENT,
	AST_EXPRESSION_FUNCTION_CALL,
} ast_expression_type_t;

typedef struct {
	char* name;
	array_t* arguments;
} ast_function_call_t;

typedef struct ast_expression_t {
	ast_expression_type_t type;

	union {
		ast_literal_t* literal;
		ast_identifier_t* identifier;
		ast_expression_binary_t* binary_op;
		ast_expression_assignment_t* assignment;
		ast_function_call_t* function_call;
	} data;
} ast_expression_t;

typedef enum {
	AST_FUNCTION_DECLARATION,
	AST_STATEMENT_RETURN,
	AST_STATEMENT_CONTINUE,
	AST_STATEMENT_BREAK,
	AST_STATEMENT_PRINT,
	AST_STATEMENT_IF,
	AST_STATEMENT_UNTIL,
	AST_STATEMENT_REPEAT,
	AST_STATEMENT_ELSEIF,
	AST_BLOCK,
	AST_EXPRESSION,
} ast_node_type_t;

typedef struct {
	ast_expression_t* condition;
	struct ast_node* block;
} ast_statement_until_t;

typedef struct {
	ast_expression_t* condition;
	struct ast_node* block;
} ast_statement_repeat_t;

typedef struct {
	ast_expression_t* condition;
	struct ast_node* block;
	struct ast_node_t** elseifs;
	struct ast_node* else_block;
	size_t num_elseifs;
} ast_statement_if_t;

typedef struct ast_node {
	ast_node_type_t type;
	union {
		ast_function_declaration_t* function_declaration;
		ast_statement_return_t* statement_return;
		ast_statement_print_t* statement_print;
		ast_block_t* block;
		ast_expression_t* expression;
		ast_statement_if_t* statement_if;
		ast_statement_until_t* statement_until;
		ast_statement_repeat_t* statement_repeat;
		ast_function_call_t* function_call;
	} data;
} ast_node_t;

typedef struct {
	char* name;
	ast_expression_t* expression;
} ast_variable_declaration_t;

typedef struct {
	lexer_t* lexer;
	size_t token_index;
	array_t* functions;
	array_t* expressions;
} parser_t;

// Function Declarations
char* read_dynamic_string();
char* intToString(int value);
char* literal_type2name(ast_literal_type_t type);
char* file_read(char* file_Name);

// Array
array_t* array_create(size_t size);
void* array_pop(array_t* arr);
void array_push(array_t* arr, void* data);
void array_free(array_t* arr);
void array_print(array_t* arr);

// Token
char* token_op_type2str(ast_expression_type_t type);
char* token_type2str(token_type_t type);
token_t* token_create(token_type_t type, const char* value, int a, int b, int c, int b2, int c2);
void token_print(token_t* t);
bool is_number(wchar_t ch);
bool is_alpha(wchar_t ch);
bool is_ident(wchar_t ch);
wchar_t read_token(lexer_t* lexer);
wchar_t unread_token(lexer_t* lexer);
char digit_wchar2char(wchar_t ch);
void read_number(lexer_t* lexer, wchar_t ch);
void read_comment_singleline(lexer_t* lexer);
void read_comment_multiline(lexer_t* lexer);
void read_string(lexer_t* lexer, wchar_t ch);
size_t mb_strlen(char* identifier);
void read_identifier(lexer_t* lexer, wchar_t ch);
size_t wchar_length(wchar_t wide_char);

// Lexer
lexer_t* lexer_create(const char* data);
void lexer_free(lexer_t* lexer);
void lexer_lex(lexer_t* lexer);

// Parser
parser_t* parser_create(lexer_t* lexer);
void parser_parse(parser_t* parser);
void parser_free(parser_t* parser);
token_t* parser_token_eat(parser_t* parser, token_type_t type);

void help();
int main(int argc, char** argv);
