#include <stdio.h>
/**
 *	main - program that prints numbers sep by comma
 *	Return: returns 0
 */
int main(void)
{
	int c = '0';

	for (; c <= '9'; c++)
	{
		putchar(c);
		if (c == '9')
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
