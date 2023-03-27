#include <stdio.h>
#include "main.h"
/**
 * print_array - prints the input int array;
 * @a: the input int array
 * @n: the number of elements to print
 * Return: nothing
 */
void print_array(int *a, int n)
{

	if (n <= 0)
		return;
	
	int i = 0;
	
	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if ( i == (n - 1) continue;
		_putchar(',');
		_putchar(' ');
	}
}
