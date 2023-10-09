#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv);

char *print_message(char * message){
    int year = 2023;
    sprintf(message, "IFJ %d is going to be random()\n", year);
    return message;
}