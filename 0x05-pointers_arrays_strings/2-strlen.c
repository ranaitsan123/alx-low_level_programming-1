#include"main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */

int _strlen(char *str)
{
int c = 0, i = 0;

while (str[i])
{	c++;
	i++;
}

return (c);
}
