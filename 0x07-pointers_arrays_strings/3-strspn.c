#include "main.h"

/**
 * _strspn - returns substring with char c
 * @s: - the substring
 * @accept: - the original string 
 * Return: the len
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int found = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		found = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
	}
	return (i);
}
