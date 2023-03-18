#include <stdio.h>
/**
 *	main - program that prints  combo of three digits
 *	numbers sep by comma
 *	Return: returns 0
 */
int main(void)
{
	int c;
	int d;
	int e;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (e = d + 1; e <= '9'; e++)
			{
				putchar(c);
				putchar(d);
				putchar(e);
				if (c == '7' && d == '8' && e == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
