#include "main.h"

/**
 * _strncpy - concatenates two strings into one
 * @dest: - the destination string
 * @src: - the source string
 * @n: - the limit
 * Return: the pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count1;

	count1 = 0;
	while (count1 < n)
	{
		if (*(src + count1) != '\0')
		{
			*(dest + count1) = *(src + count1);
			count1++;
		}
		else
			break;
	}
	while (count1 < n)
	{
		*(dest + count1) = '\0';
		count1++;
	}

	return (dest);
}
