#include"main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */

void print_rev(char *s)
{
	int c = _strlen(s);

	for (int i = c; i > 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
