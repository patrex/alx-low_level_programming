#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - returns a ptr to a mem block
 * @b: the size of the block of mem
 * Return: NULL on failure, ptr to the block on success
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
