#include "main.h"
#include <stddef.h>
/**
 * _strbrk - returns substring with char c
 * @s: - the substring
 * @accept: - the original string
 * Return: the len
 */
char *_strbrk(char *s, char *accept)
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
