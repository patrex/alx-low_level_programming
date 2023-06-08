#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - calls a function on a list of numbers
 * @array: ptr to the array
 * @size: the len of the list
 * @action: the call-back function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
