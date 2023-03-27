#include "main.h"
/**
 * _strlen - swaps the values of two ints;
 * @s: the pointer to the first int value
 * Return: the length of the string
 */
int _strlen(char *s)
{
	char *cptr = s;

	while (*cptr != '\n')
		cptr++;
	return (cptr - s);
}
