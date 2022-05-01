#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include "library.h"

#define SIZE 50

int main() {

    char input[SIZE] = {0};

    ssize_t length;
    length = read(STDIN_FILENO, input, SIZE);

    lib_echo(input, length);
}