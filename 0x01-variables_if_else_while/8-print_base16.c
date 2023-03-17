#include <stdio.h>
/**
 *	main - program that prints all the digits of base-16]
 *	Return: returns 0
 */
int main(void)
{
	int c = '0';

	for (; c <= '9'; c++)
		putchar(c);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
