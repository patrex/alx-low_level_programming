#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: ptr to the array
 * @size: the len of the list
 * @cmp: the call-back function
 * Return: array index, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 0)
		return (-1);
	if (array && cmp)
	{
		for (; i < size; i++)
			if (cmp(*(array + i)) != 0)
				return (i);
	}

	return (-1);
}
