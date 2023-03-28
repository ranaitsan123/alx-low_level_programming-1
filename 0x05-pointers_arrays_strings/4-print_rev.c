#include"main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */

void print_rev(char *s)
{
	int i = 0, c = 0;

	while (s[i++])
		c++;
        
	i = c;

	while (i > 0)
	{
		 _putchar(s[i]);
		 i--;
	}

	_putchar('\n');
}
