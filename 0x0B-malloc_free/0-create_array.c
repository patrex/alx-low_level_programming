#include "main.h"
#include <stddef.h>
/**
 * create_array - creates an array of chars
 * @size: the number of bytes to request
 * @c: the special char to init with
 * Return: NULL on size = 0, ptr on success, NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *charray;

	if (size == 0)
		return (NULL);
	charray = malloc(sizeof(char) * size);
	if (charray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(charray + i) = c;
	return (charray);
}
