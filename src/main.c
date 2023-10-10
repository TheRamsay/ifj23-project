#include <stdio.h>
#include <main.h>
#include <symbol.h>

int main(int argc, char ** argv){
    symbol s;
    sym_init(&s);
    char message[64];
    printf(print_message(message));
    sym_set_name(&s, "hello");
    printf("%s\n", s.name);
    sym_deinit(&s);
    return 0;
}