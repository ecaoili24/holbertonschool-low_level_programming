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

	for (; name[name_new]; name_new++)
		;
	for (; owner[owner_new]; owner_new++)
		;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (name_new + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (owner_new + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	for (i = 0; owner[i]; i++)
		new->owner[i] = owner[i];
	new->owner[i] = '\0';

	new->age = age;

	return (new);
}
