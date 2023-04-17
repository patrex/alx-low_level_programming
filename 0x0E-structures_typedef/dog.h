#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;
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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
