#include "dog.h"
#include <string.h>

/**
 * init_dog - initialize the properties of a dog
 * @d: a pointer to the dog
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
