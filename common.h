#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/*
 * TODO : ??
 */
#define DEBUG_PRINT_CODE

/*
 * TODO : ??
 */
#define DEBUG_TRACE_EXECUTION

/*
 * TODO : ??
 */
#define UINT8_COUNT (UINT8_MAX + 1)

// In the book, we show them defined, but for working on them locally,
// we don't want them to be.

#undef DEBUG_PRINT_CODE
#undef DEBUG_TRACE_EXECUTION
#undef DEBUG_STRESS_GC
#undef DEBUG_LOG_GC
