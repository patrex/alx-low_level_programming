#include "main.h"
/**
 * print_rev - prints the input char array in reverse;
 * @s: the input string
 * Return: nothing
 */
void print_rev(char *s)
{
	char *tmp = s;
	int len = 0;

	while (*tmp++ != '\0')
		len++;
	for (; len >= 0; len--)
		_putchar(*(s + len));
	_putchar('\n');
}
