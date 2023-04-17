#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the mem resources used to store a dog
 * @d: pointer to the dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d)
	}
}
