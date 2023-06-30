#pragma once

#include "common.h"
#include "value.h"

/*
 * TODO : ??
 */
typedef struct {
  ObjString* key;
  Value value;
} Entry;

/*
 * TODO : ??
 */
typedef struct {
  int count;
  int capacity;
  Entry* entries;
} Table;

/*
 * TODO : ??
 */
void initTable(Table* table);

/*
 * TODO : ??
 */
void freeTable(Table* table);

/*
 * TODO : ??
 */
bool tableGet(Table* table, ObjString* key, Value* value);

/*
 * TODO : ??
 */
bool tableSet(Table* table, ObjString* key, Value value);

/*
 * TODO : ??
 */
bool tableDelete(Table* table, ObjString* key);

/*
 * TODO : ??
 */
void tableAddAll(Table* from, Table* to);

/*
 * TODO : ??
 */
ObjString* tableFindString(Table* table, const char* chars, int length, uint32_t hash);
