// main.c

#include "main.h"
#include <stdio.h>

int main(void)
{
    int len;

    len = _printf("Let's print some characters: %% %c %s\n", 'A', "Hello, World!");
    _printf("Total characters printed: %d\n", len);

    return (0);
}
