#inclde "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: the size of array.
 * @array: the array.
 * @cmp: a pointer to the function to be executed.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
		return;

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0)
				return i;

	}

	return(-1);
}
