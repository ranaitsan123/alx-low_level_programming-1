#include"main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */

void print_rev(char *s)
{
	int c = _strlen(s);

	int i = c;

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
