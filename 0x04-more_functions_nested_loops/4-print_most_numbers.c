#include "main.h"
/**
 * print_numbers - prints the chars 0 - 9 skipping 2 and 4
 * Return: no value
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
