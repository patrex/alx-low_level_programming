#include "main.h"
#include <stddef.h>
/**
 * _strstr - returns substring with char c
 * @needle: - the substring
 * @haystack: - the original string
 * Return: the len
 */
char *_strstr(char *haystack, char *needle)
{
	char *tmp, *tmp2;

	tmp2 = needle;
	if (*tmp2 == 0)
		return (haystack);
	for (; *haystack != '\0'; haystack += 1)
	{
		if (*haystack != *tmp2)
			continue;
		tmp = haystack;
		while (1)
		{
			if (*tmp2 == 0)
				return (haystack);
			if (*tmp++ != *tmp2++)
				break;
		}
		tmp2 = needle;
	}
	return (NULL);
}
