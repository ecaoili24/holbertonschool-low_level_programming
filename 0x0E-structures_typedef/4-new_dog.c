#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create a new dog fuction
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog owner's name
 *
 * Return: A pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int name_new = 0, owner_new = 0, i;

	if (!name)
		name = "";
	if (!owner)
		owner = "";

	new = malloc(sizeof(dog_t));
	if (new == 0)
		return (0);

	new->name = malloc(sizeof(char) * (name_new + 1));
	if (new->name == 0)
	{
		free(new);
		return (0);
	}

	new->owner = malloc(sizeof(char) * (owner_new + 1));
	if (new->owner == 0)
	{
		free(new);
		free(new->name);
		return (0);
	}

	for (i = 0; i <= name_new; i++)
		new->name[i] = name[i];

	new->age = age;

	for (i = 0; i <= owner_new; i++)
		new->owner[i] = owner[i];

	return (new);
}
