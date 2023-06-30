#pragma once

#include "common.h"
#include "value.h"

/*
 * TODO : ??
 */
typedef enum {
  /*
   * TODO : ??
   */
  OP_CONSTANT,
  
  /*
   * TODO : ??
   */
  OP_NIL,
  
  /*
   * TODO : ??
   */
  OP_TRUE,
  
  /*
   * TODO : ??
   */
  OP_FALSE,
  
  /*
   * TODO : ??
   */
  OP_POP,
  
  /*
   * TODO : ??
   */
  OP_GET_LOCAL,
  
  /*
   * TODO : ??
   */
  OP_SET_LOCAL,
  
  /*
   * TODO : ??
   */
  OP_GET_GLOBAL,
  
  /*
   * TODO : ??
   */
  OP_DEFINE_GLOBAL,
  
  /*
   * TODO : ??
   */
  OP_SET_GLOBAL,
  
  /*
   * TODO : ??
   */
  OP_EQUAL,
  
  /*
   * TODO : ??
   */
  OP_GREATER,
  
  /*
   * TODO : ??
   */
  OP_LESS,
  
  /*
   * TODO : ??
   */
  OP_ADD,
  
  /*
   * TODO : ??
   */
  OP_SUBTRACT,
  
  /*
   * TODO : ??
   */
  OP_MULTIPLY,
  
  /*
   * TODO : ??
   */
  OP_DIVIDE,
  
  /*
   * TODO : ??
   */
  OP_NOT,
  
  /*
   * TODO : ??
   */
  OP_NEGATE,
  
  /*
   * TODO : ??
   */
  OP_PRINT,
  
  /*
   * TODO : ??
   */
  OP_JUMP,
  
  /*
   * TODO : ??
   */
  OP_JUMP_IF_FALSE,
  
  /*
   * TODO : ??
   */
  OP_LOOP,
  
  /*
   * TODO : ??
   */
  OP_CALL,
  
  /*
   * TODO : ??
   */
  OP_RETURN
} OpCode;

/*
 * TODO : ??
 */
typedef struct {
  
  /*
   * TODO : ??
   */
  int count;
  
  /*
   * TODO : ??
   */
  int capacity;
  
  /*
   * TODO : ??
   */
  uint8_t* code;
  
  /*
   * TODO : ??
   */
  int* lines;
  
  /*
   * TODO : ??
   */
  ValueArray constants;
} Chunk;

/*
 * TODO : ??
 */
void initChunk(Chunk* chunk);

/*
 * TODO : ??
 */
void freeChunk(Chunk* chunk);

/*
 * TODO : ??
 */
void writeChunk(Chunk* chunk, uint8_t byte, int line);

/*
 * TODO : ??
 */
int addConstant(Chunk* chunk, Value value);

