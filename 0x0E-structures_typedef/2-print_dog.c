#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - initialize the properties of a dog
 * @d: a pointer to the dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name == NULL ? printf("Name: (nil)\n")
			: printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("Owner: (nil)\n")
			: printf("Owner: %s\n", d->owner);
	}
}
