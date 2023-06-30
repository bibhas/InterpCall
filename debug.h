#pragma once

#include "chunk.h"

/*
 * TODO : ??
 */
void disassembleChunk(Chunk* chunk, const char* name);

/*
 * TODO : ??
 */
int disassembleInstruction(Chunk* chunk, int offset);

