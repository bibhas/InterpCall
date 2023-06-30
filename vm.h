#pragma once

#include "object.h"
#include "table.h"
#include "value.h"

/*
 * TODO : ??
 */
#define FRAMES_MAX 64

/*
 * TODO : ??
 */
#define STACK_MAX (FRAMES_MAX * UINT8_COUNT)

/*
 * TODO : ??
 */
typedef struct {
  
  /*
   * Function associated with the current call frame.
   */
  ObjFunction* function;
  
  /*
   * Instruction pointer associated with the call frame.
   * It will point to a byte in the function's `chunk.code`.
   */
  uint8_t* ip;
  
  /*
   * Used for local variables. Points to the stack (of Values).
   *
   *    What exactly is the use of slots? Why are they called slots
   *    any ways? What is the use? If I remember clearly, aren't slots
   *    used for local variables? Hmm... Right. So, slots are used for
   *    local variables and, then what? Hmm... I'm not entirely sure I
   *    understand how that works. Yeah, that's the gap in my knowledge.
   *    I didn't really understand how that part works. Really. How does
   *    it work?
   */
  Value* slots;
} CallFrame;

/*
 * TODO : ??
 */
typedef struct {
  
  /*
   * TODO : ??
   */
  CallFrame frames[FRAMES_MAX];
  
  /*
   * Number of active call frames.
   */
  int frameCount;
  
  /*
   * TODO : ??
   */
  Value stack[STACK_MAX];
  
  /*
   * Points to the value at the top of the stack.
   */
  Value* stackTop;
  
  /*
   * TODO : ??
   */
  Table globals;
  
  /*
   * TODO : ??
   */
  Table strings;
  
  /*
   * TODO : ??
   */
  Obj* objects;
} VM;

/*
 * TODO : ??
 */
typedef enum {
  
  /*
   * TODO : ??
   */
  INTERPRET_OK,
  
  /*
   * TODO : ??
   */
  INTERPRET_COMPILE_ERROR,
  
  /*
   * TODO : ??
   */
  INTERPRET_RUNTIME_ERROR
} InterpretResult;

/*
 * Singleton VM.
 */
extern VM vm;

/*
 * TODO : ??
 */
void initVM();

/*
 * TODO : ??
 */
void freeVM();

/*
 * TODO : ??
 */
InterpretResult interpret(const char* source);

/*
 * TODO : ??
 */
void push(Value value);

/*
 * TODO : ??
 */
Value pop();
