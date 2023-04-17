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
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
