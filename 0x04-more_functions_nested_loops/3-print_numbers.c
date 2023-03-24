#include"main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */

void print_numbers(void)
{
for(int i=0;i<=9;i++){
char c= i+'0';
_putchar('%c',c);
}
_putchar('\n');
}
