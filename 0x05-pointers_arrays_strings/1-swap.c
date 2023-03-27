#include "main.h"
/**
 * swap_int - swaps the values of two ints;
 * @a: the pointer to the first int value
 * @b: the pointer to the second int value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
