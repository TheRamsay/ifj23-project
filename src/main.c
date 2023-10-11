#include <stdio.h>
#include <main.h>
#include <symbol.h>

int main(int argc, char ** argv){
    symbol s;
    sym_init(&s);
    char message[64];
    printf(print_message(message));
    sym_set_name(&s, "hello");
    sym_set_type(&s, sym_t_int);
    printf("%s, %d\n", s.name, (int)s.type);
    sym_deinit(&s);
    return 0;
}