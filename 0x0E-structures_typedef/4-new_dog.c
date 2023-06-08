#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - make a new dog and set its properties
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int name_len = 0, owner_len = 0;
	int i = 0, j = 0;

	if (!(name) || !(owner))
		return (NULL);
	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	while (*(name + i) != '\0')
	{
		++name_len;
		i++;
	}
	while (*(owner + j) != '\0')
	{
		++owner_len;
		j++;
	}
	ptr->name = malloc(name_len + 1);
	ptr->owner = malloc(owner_len + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	for (i = 0; i < name_len; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';
	for (i = 0; i < owner_len; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';
	return (ptr);
}
