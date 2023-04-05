#include "main.h"

/**
 * _print_rev_recursion - prints out a reversed string recursive
 * @s: the char array
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
