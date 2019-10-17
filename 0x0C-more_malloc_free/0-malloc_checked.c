#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates mememory using malloc
 * @b: the amount of memory to allocate
 *
 * Return: A pointer to the allocated memory and if malloc fails, the
 * malloc_checked function should return a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
	exit(98);
	}

	return (p);
}
