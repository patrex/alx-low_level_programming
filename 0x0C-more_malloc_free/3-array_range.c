#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the min value
 * @max: the max value
 * Return: NULL on failure, void ptr to the block on success
 */

int *array_range(int min, int max)
{
	int *ptr;
	int c;

	if (max < min)
		return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		*(ptr + c) = min;
		min += 1;
		c++;
	}

	return (ptr);
}
