#include "main.h"

/**
 * power_operation - helper function: returns the natural square root of a number.
 * @n: the number
 * @c: iterator
 * Return: the square root if foud else or -1.
 */
int check(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + check(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (check(n, 2));
}
