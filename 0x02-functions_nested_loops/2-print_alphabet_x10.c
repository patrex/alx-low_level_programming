#include "main.h"
/**
 * print_alphabet_x10 - writes the alphabet ten times c to stdout
 *
 * Return: On success 0.
 */
void print_alphabet_x10(void)
{
	int line = 0;

	while (line < 11)
	{
		int c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');

		line++;
	}
}
