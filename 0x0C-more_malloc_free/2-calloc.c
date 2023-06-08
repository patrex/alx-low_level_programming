#include <stdlib.h>
#include "main.h"

/**
 * _calloc - creates mem block and assigns zeros
 * @nmemb: the first string
 * @size: the size of the mem block
 * Return: NULL on failure, void ptr to the block on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int c = 0;
	unsigned int fsize = nmemb * size;

	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);

	ptr = malloc(fsize);

	if (ptr == NULL)
		return (NULL);

	for (; c < fsize; c++)
		*(ptr + c) = 0;

	return (ptr);
}
