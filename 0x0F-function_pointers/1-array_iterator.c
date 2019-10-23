#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @size: the size of an array
 * @action: a pointer to the function that will be used
 * @array: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((*action) == NULL)
		return;

	if (array == NULL)
		return;

	if (size <= 0)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
