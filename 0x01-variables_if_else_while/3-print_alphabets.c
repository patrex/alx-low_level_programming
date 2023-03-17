#include <stdio.h>
/**
 *	main - program that prints the alphabet in lower case
 *	Return: returns 0
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
