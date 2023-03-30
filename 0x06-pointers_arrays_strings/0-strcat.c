#include "main.h"

/**
 * _strcat - concatenates two strings into one
 * @dest - the destination string
 * @src - the source string
 * Return: the pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int count1, count2;

	count1 = 0;
	while (*(dest + count1))
	{
		if (*(dest + count1) != '\0')
		{
			count1++;
		}
	}

	count2 = 0;
	while (*(src + count2))
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
		{
			break;
		}
		count1++;
		count2++;
	}
	return (dest);
}
