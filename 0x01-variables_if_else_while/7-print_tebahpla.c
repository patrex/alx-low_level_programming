#include <stdio.h>
/**
 *	main - program that prints the alphabet in lower case in reverse
 *	Return: returns 0
 */
int main(void)
{
	int c = 'z';

	for (; c >= 'a'; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
