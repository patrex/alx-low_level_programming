#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - returns substring with char c
 * @a: - the array
 * @size: - how many
 * Return: nothing
 */
char print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(a + i);
	}
	printf("%d, %d\n", sum, sum2);
}
