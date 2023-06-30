#pragma once

/*
 * TODO : ??
 */
typedef enum {
  
  /*
   * TODO : ??
   */
  TOKEN_LEFT_PAREN, TOKEN_RIGHT_PAREN,
  
  /*
   * TODO : ??
   */
  TOKEN_LEFT_BRACE, TOKEN_RIGHT_BRACE,
  
  /*
   * TODO : ??
   */
  TOKEN_COMMA,
  
  /*
   * TODO : ??
   */
  TOKEN_DOT,
  
  /*
   * TODO : ??
   */
  TOKEN_MINUS, TOKEN_PLUS,
  
  /*
   * TODO : ??
   */
  TOKEN_SEMICOLON,
  
  /*
   * TODO : ??
   */
  TOKEN_SLASH, TOKEN_STAR,
  
  /*
   * TODO : ??
   */
  TOKEN_BANG, TOKEN_BANG_EQUAL,
  
  /*
   * TODO : ??
   */
  TOKEN_EQUAL, TOKEN_EQUAL_EQUAL,
  
  /*
   * TODO : ??
   */
  TOKEN_GREATER, TOKEN_GREATER_EQUAL,
  
  /*
   * TODO : ??
   */
  TOKEN_LESS, TOKEN_LESS_EQUAL,
  
  /*
   * TODO : ??
   */
  TOKEN_IDENTIFIER,
  
  /*
   * TODO : ??
   */
  TOKEN_STRING,
  
  /*
   * TODO : ??
   */
  TOKEN_NUMBER,
  
  /*
   * TODO : ??
   */
  TOKEN_AND, TOKEN_OR,
  
  /*
   * TODO : ??
   */
  TOKEN_CLASS,
  
  /*
   * TODO : ??
   */
  TOKEN_IF, TOKEN_ELSE,
  
  /*
   * TODO : ??
   */
  TOKEN_FALSE, TOKEN_TRUE,
  
  /*
   * TODO : ??
   */
  TOKEN_FOR, TOKEN_WHILE,
  
  /*
   * TODO : ??
   */
  TOKEN_FUN,
  
  /*
   * TODO : ??
   */
  TOKEN_NIL,
  
  /*
   * TODO : ??
   */
  TOKEN_RETURN,
  
  /*
   * TODO : ??
   */
  TOKEN_SUPER, TOKEN_THIS,
  
  /*
   * TODO : ??
   */
  TOKEN_VAR,
  
  /*
   * TODO : ??
   */
  TOKEN_PRINT,
  
  /*
   * TODO : ??
   */
  TOKEN_ERROR,
  
  /*
   * TODO : ??
   */
  TOKEN_EOF
} TokenType;

/*
 * TODO : ??
 */
typedef struct {
  
  /*
   * TODO : ??
   */
  TokenType type;
  
  /*
   * TODO : ??
   */
  const char* start;
  
  /*
   * TODO : ??
   */
  int length;
  
  /*
   * TODO : ??
   */
  int line;
} Token;

/*
 * TODO : ??
 */
void initScanner(const char* source);

/*
 * TODO : ??
 */
Token scanToken();

