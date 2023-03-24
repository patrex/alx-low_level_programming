#include "main.h"
/**
 * more_numbers - prints the chars 0 - 9 skipping 2 and 4
 * Return: no value
 */
void more_numbers(void)
{
	int line;
	int c;
	int j = '1';
	int k;

	for (line = 0; line <= 10; line++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		for (k = '0'; k < '5'; k++)
		{
			_putchar(j + k);
		}
		_putchar('\n');
	}
}
