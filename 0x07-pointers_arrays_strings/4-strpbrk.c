#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - returns substring with char c
 * @s: - the substring
 * @accept: - the original string
 * Return: the len
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp;

	while (*s++ != '\0')
	{
		tmp = accept;
		while (*tmp != '\0')
		{
			if (*s == *tmp)
				return (s);
			tmp++;
		}

	return (NULL);
}
