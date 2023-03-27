#include "main.h"
/**
 * _strcpy - copies from source to dest
 * @dest: target buffer addr
 * @src: source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while ((*src = *dest) != '\0')
	{
		dest++;
		src++;
	}
	return (dest);
}
