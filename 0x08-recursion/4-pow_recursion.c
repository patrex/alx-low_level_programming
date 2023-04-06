#include "main.h"

/**
 * _pow_recursion - computes the value of x raised to y
 * @x: the base
 * @y: the exponent
 * Return: the value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	int tmp;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if ((y % 2) == 0)
	{
		tmp = _pow_recursion(x, (y / 2));
		return (tmp * tmp);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
