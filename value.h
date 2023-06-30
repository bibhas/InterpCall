#pragma once

#include "common.h"

/*
 * TODO : ??
 */
typedef struct Obj Obj;

/*
 * TODO : ??
 */
typedef struct ObjString ObjString;

/*
 * TODO : ??
 */
typedef enum {
  
  /*
   * TODO : ??
   */
  VAL_BOOL,
  
  /*
   * TODO : ??
   */
  VAL_NIL, // [user-types]
  
  /*
   * TODO : ??
   */
  VAL_NUMBER,
  
  /*
   * TODO : ??
   */
  VAL_OBJ
} ValueType;

/*
 * TODO : ??
 */
typedef struct {
  
  /*
   * TODO : ??
   */
  ValueType type;
  
  /*
   * TODO : ??
   */
  union {
    
    /*
     * TODO : ??
     */
    bool boolean;
    
    /*
     * TODO : ??
     */
    double number;
    
    /*
     * TODO : ??
     */
    Obj* obj;
  } as; // [as]
} Value;

/*
 * TODO : ??
 */
#define IS_BOOL(value)    ((value).type == VAL_BOOL)

/*
 * TODO : ??
 */
#define IS_NIL(value)     ((value).type == VAL_NIL)

/*
 * TODO : ??
 */
#define IS_NUMBER(value)  ((value).type == VAL_NUMBER)

/*
 * TODO : ??
 */
#define IS_OBJ(value)     ((value).type == VAL_OBJ)

/*
 * TODO : ??
 */
#define AS_OBJ(value)     ((value).as.obj)

/*
 * TODO : ??
 */
#define AS_BOOL(value)    ((value).as.boolean)
/*
 * TODO : ??
 */
#define AS_NUMBER(value)  ((value).as.number)

/*
 * TODO : ??
 */
#define BOOL_VAL(value)   ((Value){VAL_BOOL, {.boolean = value}})

/*
 * TODO : ??
 */
#define NIL_VAL           ((Value){VAL_NIL, {.number = 0}})

/*
 * TODO : ??
 */
#define NUMBER_VAL(value) ((Value){VAL_NUMBER, {.number = value}})

/*
 * TODO : ??
 */
#define OBJ_VAL(object)   ((Value){VAL_OBJ, {.obj = (Obj*)object}})

/*
 * TODO : ??
 */
typedef struct {
  
  /*
   * TODO : ??
   */
  int capacity;
  
  /*
   * TODO : ??
   */
  int count;
  
  /*
   * TODO : ??
   */
  Value* values;
} ValueArray;

/*
 * TODO : ??
 */
bool valuesEqual(Value a, Value b);

/*
 * TODO : ??
 */
void initValueArray(ValueArray* array);

/*
 * TODO : ??
 */
void writeValueArray(ValueArray* array, Value value);

/*
 * TODO : ??
 */
void freeValueArray(ValueArray* array);

/*
 * TODO : ??
 */
void printValue(Value value);
