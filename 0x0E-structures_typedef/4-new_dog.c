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
	int name_len, owner_len, i;

	for (name_len = 0; name[name_len] != '\0'; name_len++)
		;

	for (owner_len = 0; owner[owner_len] != '\0'; name_len++)
		;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (name_len + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new->name[i] = name[i];

	new->age = age;

	for (i = 0; i <= owner_len; i++)
		new->owner[i] = owner[i];

	return (new);
}
