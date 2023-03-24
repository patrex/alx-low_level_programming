#include "main.h"
/**
 * print_line - print a line on stdout
 * @n: number of '_' to print
 * Return:  -
 */
int print_line(int n)
{
	if (n < 0 || n == 0)
		_putchar('\n');
	else
	{
		while (--n)
			_putchar('_');
		_putchar('\n');
	}
}
