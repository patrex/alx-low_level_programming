#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: - destination string
 * @src: - source string
 * @n: - the number of bytes to copy
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0;  i < n && (*(dest + i) = *(src + i)); i++)
	{
	}

	return (dest);
}
