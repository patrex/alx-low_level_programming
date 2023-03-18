#include <stdio.h>
/**
 *	main - program that prints  combo of two digits
 *	numbers sep by comma
 *	Return: returns 0
 */
int main(void)
{
	int c;
	int d;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			putchar(c);
			putchar(d);
			if (c == '8' && d == '9')
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
