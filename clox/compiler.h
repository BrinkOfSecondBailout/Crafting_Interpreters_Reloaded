#ifndef clox_compiler_h
#define clox_compiler_h

#include "chunk.h"
#include "object.h"
#include "common.h"
#include "compiler.h"
#include "scanner.h"

bool compile(const char *source, Chunk *chunk);

#endif