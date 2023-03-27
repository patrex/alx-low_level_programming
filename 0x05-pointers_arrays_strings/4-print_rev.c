#include "main.h"
/**
 * print_rev - prints the input char array in reverse;
 * @s: the input string
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	len -= 1;
	for (; len >= 0; len--)
		_putchar(*(s + len));
	_putchar('\n');
}
