#include"main.h"

/**  swap_int-swaps the values of two integers
 * @a: first int to swap
 * @b: second int to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int tmp;
tmp = a;
a = b;
b = tmp;
}
