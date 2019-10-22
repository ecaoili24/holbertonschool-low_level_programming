#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a varaible of type struct dog
 * @d: variable name
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
