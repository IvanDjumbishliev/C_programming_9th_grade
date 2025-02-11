#include <stdio.h>
#include "until.h"

void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
}