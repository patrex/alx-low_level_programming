#include <stdio.h>
/**
 *	main - program that prints digits btw '0' and '9' and exits
 *	Return: returns 0
 */
int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
