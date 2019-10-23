#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * @array: the array
 *
 * Return: returns the index of the first element for which the cmp function
 * does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((*cmp) == NULL)
		return (-1);

	if (array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if ((*cmp)(array[i]))
		return (i);

	return (-1);
}
