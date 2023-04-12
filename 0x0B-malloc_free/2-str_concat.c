#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate input strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the new char array
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	unsigned int i = 0, j = 0, k = 0;
	unsigned int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; *(s1 + i) != '\0'; i++)
		;

	for (; *(s2 + j) != '\0'; j++)
		;

	newstr = malloc(sizeof(char) * (i + j + 1));

	if (newstr == NULL)
		return (NULL);

	for (; k < i; k++)
		*(newstr + k) = *(s1 + k);

	a = j;
	for (j = 0; j <= a; k++, j++)
		*(newstr + k) = *(s2 + j);

	return (newstr);
}
