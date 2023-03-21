#include "main.h"
/**
 * print_sign - determines if an input char is lowercase, uppercase
 * @n: the number under test
 * Return: 1 if positive. 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	int last_digit = n % 10;

	if (last_digit > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (last_digit == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
