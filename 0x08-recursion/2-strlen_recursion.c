#include "main.h"

/**
 * _strlen_recursion - returns the len of a string
 * @s: the char array
 * Return: the len
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
