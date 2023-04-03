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
	int i = 0;

	while (i++ < n && (*(dest + i) = *(src + i)))
	{
	}
	return (dest);
}
