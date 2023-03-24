#include "main.h"
/**
 * more_numbers - prints the chars 0 - 9 skipping 2 and 4
 * Return: no value
 */
void more_numbers(void)
{
	int line;
	int c;
	int last_digit;

	for (line = 0; line < 10; line++)
	{
		for (c = 0; c <= 14; c++)
		{
			last_digit = c;
			if (c >= 0)
			{
				_putchar('1');
				last_digit = c % 10;
			}
			_putchar(last_digit + '0');
		}
		_putchar('\n');
	}
}
