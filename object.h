#pragma once

#include "common.h"
#include "chunk.h"
#include "value.h"

/*
 * TODO : ??
 */
#define OBJ_TYPE(value)        (AS_OBJ(value)->type)

/*
 * TODO : ??
 */
#define IS_FUNCTION(value)     isObjType(value, OBJ_FUNCTION)

/*
 * TODO : ??
 */
#define IS_NATIVE(value)       isObjType(value, OBJ_NATIVE)

/*
 * TODO : ??
 */
#define IS_STRING(value)       isObjType(value, OBJ_STRING)

/*
 * TODO : ??
 */
#define AS_FUNCTION(value)     ((ObjFunction*)AS_OBJ(value))

/*
 * TODO : ??
 */
#define AS_NATIVE(value) \
    (((ObjNative*)AS_OBJ(value))->function)

/*
 * TODO : ??
 */
#define AS_STRING(value)       ((ObjString*)AS_OBJ(value))

/*
 * TODO : ??
 */
#define AS_CSTRING(value)      (((ObjString*)AS_OBJ(value))->chars)

/*
 * TODO : ??
 */
typedef enum {
  /*
   * TODO : ??
   */
  OBJ_FUNCTION,
  
  /*
   * TODO : ??
   */
  OBJ_NATIVE,
  
  /*
   * TODO : ??
   */
  OBJ_STRING,
} ObjType;

/*
 * TODO : ??
 */
struct Obj {
  
  /*
   * TODO : ??
   */
  ObjType type;
  
  /*
   * TODO : ??
   */
  struct Obj* next;
};

/*
 * TODO : ??
 */
typedef struct {
  
  /*
   * TODO : ??
   */
  Obj obj;
  
  /*
   * TODO : ??
   */
  int arity;
  
  /*
   * TODO : ??
   */
  Chunk chunk;
  
  /*
   * TODO : ??
   */
  ObjString* name;
} ObjFunction;

/*
 * TODO : ??
 */
typedef Value (*NativeFn)(int argCount, Value* args);

/*
 * TODO : ??
 */
typedef struct {
  
  /*
   * TODO : ??
   */
  Obj obj;
  
  /*
   * TODO : ??
   */
  NativeFn function;
} ObjNative;

/*
 * TODO : ??
 */
struct ObjString {
  
  /*
   * TODO : ??
   */
  Obj obj;
  
  /*
   * TODO : ??
   */
  int length;
  
  /*
   * TODO : ??
   */
  char* chars;
  
  /*
   * TODO : ??
   */
  uint32_t hash;
};

/*
 * TODO : ??
 */
ObjFunction* newFunction();

/*
 * TODO : ??
 */
ObjNative* newNative(NativeFn function);

/*
 * TODO : ??
 */
ObjString* takeString(char* chars, int length);

/*
 * TODO : ??
 */
ObjString* copyString(const char* chars, int length);

/*
 * TODO : ??
 */
void printObject(Value value);

/*
 * TODO : ??
 */
static inline bool isObjType(Value value, ObjType type) {
  return IS_OBJ(value) && AS_OBJ(value)->type == type;
}
