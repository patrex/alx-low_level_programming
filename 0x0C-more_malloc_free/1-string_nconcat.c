#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - returns a pointer to a concated string
 * @s1: the first string
 * @s2: the second string
 * @n: the size of bytes to concat
 * Return: NULL on failure, ptr to the block on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0, newlen = 0;
	unsigned int c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; *(s1 + len1) != '\0'; len1++)
		;
	for (; *(s2 + len2) != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;
	newlen = n + len1;

	ptr = malloc(newlen + 1);

	if (ptr == NULL)
		return (NULL);

	while (c < newlen)
	{
		if (c < len1)
			ptr[c] = s1[c];
		else
			ptr[c] = s2[c - len1];
		c++;
	}
	ptr[c] = '\0';

	return (ptr);
}
