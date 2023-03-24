#include "main.h"
/**
 * print_square - print a diagonal line on stdout
 * @size: length and breadth of square
 * Return:  -
 */
void print_square(int size)
{
	if (size < 0 || size == 0)
		_putchar('\n');
	else
	{
		int len;
		int wid;

		for (len = 0; len < size; len++)
		{
			for (wid = 0; wid < size; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
