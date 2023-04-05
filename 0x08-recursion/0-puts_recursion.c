#include "main.h"

/**
 * _puts_recursion - prints out a string recursively
 * @s: the char array
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	_puts_recursion(s++);
}

