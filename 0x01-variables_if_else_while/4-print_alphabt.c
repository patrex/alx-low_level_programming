#include <stdio.h>
/**
 *	main - program that prints the alphabet in lower case exc. 'q' and 'e'
 *	Return: returns 0
 */
int main(void)
{
	int c = 'a';

	for (; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
