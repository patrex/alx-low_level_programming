#include "main.h"

/**
 * _memset - fills the area s by b
 * @s: - destination string
 * @b: - the constant char
 * @n: - the number of bytes to copy
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0;  i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
