#include"main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */

void print_rev(char *s)
{
int i;

i = 0;

while (s[i] != '\0')
i++;
        
while (i >= 0)
{
_putchar(s[i]);
i--;
}

_putchar('\n');
}
