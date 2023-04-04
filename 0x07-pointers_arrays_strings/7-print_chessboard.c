#include "main.h"

/**
 * print_chessboard - returns substring with char c
 * @a: - the addr of the first array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int k;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			k = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - k]);
	}
	_putchar('\n');
}
