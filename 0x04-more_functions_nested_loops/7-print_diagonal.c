#include "main.h"
/**
 * print_diagonal - print a diagonal line on stdout
 * @n: number of '\' to print
 * Return:  -
 */
void print_diagonal(int n)
{
	if (n < 0 || n == 0)
		_putchar('\n');
	else
	{
		int lines = 1;
		int spaces;

		while (lines <= n)
		{
			for (spaces = lines - 1; spaces > 0; spaces--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');

			lines++;
		}
	}
}
