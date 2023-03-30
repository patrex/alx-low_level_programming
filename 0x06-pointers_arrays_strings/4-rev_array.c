#include "main.h"

/**
 * reverse_array - reverses an int array
 * @a: - the array
 * @n: - number of elts of the array
 * Return: Nothing
 */
void reverse_array(char *a, int n)
{
	int i, j, tmp;

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < (n - i); j++)
		{
			tmp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = tmp;
		}
	}
}
