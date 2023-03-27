#include "main.h"
/**
 * _puts - prints the input char array;
 * @str: the input string
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
