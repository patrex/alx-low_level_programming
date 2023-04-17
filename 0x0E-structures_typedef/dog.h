#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a model for a dog
 * @name: the dog's mame
 * @age: the age
 * @owner: the owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
