#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array to be searched
 * @size: the length of the array
 * @value: the value to be searched in the array
 * Return: returns the index of the array found, if not found or the array is
 * empty it returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x = 0; /* the indx */
	int step = sqrt(size); /* gets the size of the array */

	if (!array || size == 0) /* checks if the arr is NULL or the size = 0 */
		return (-1);

	while (array[x] < value) /* jump search */
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		x += step;
		if (x >= size)/* exits when the idx is greater or = to size */
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", x - step, x);
	x -= step;

	while (array[x] < value) /* linear search */
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		x++;
		if (x == size) /* exits when idx = size */
			return (-1);
	}

	if (array[x] == value) /* returns the index */
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		return (x);
	}
	return (-1);
}
