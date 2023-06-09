#include "main.h"
#include <stddef.h>
/**
 * _strchr - returns substring with char c
 * @s: - destination string
 * @c: - the character
 * Return: Pointer to s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	if (*(s + i) == c)
		return (s + i);

	return (NULL);
}
