#include "main.h"
/**
 * print_last_digit - determines the abs value of input int
 * @n: the integer under test
 * Return: 0 if lowercase
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (n < 0)
		result *= -1;
	_putchar(result + '0');
	return (result);
}
