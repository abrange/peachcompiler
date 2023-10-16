#include <stdio.h>
#include <stdlib.h>
#include "compiler.h"

struct compile_process *compile_process_create(const char *filename, const char *filename_out, int flags);