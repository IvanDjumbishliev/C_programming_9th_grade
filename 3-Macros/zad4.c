#include <stdio.h>

#define COMMAND(NAME, TYPE)  NAME##_##TYPE##_command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)() {\
    printf("Hello!");\
}

DEFINE_COMMAND(print, ) 
DEFINE_COMMAND(print, string) 

int main() {
    print_int_command();
    print_string_command();
    return 0;
}