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
	size_t x = 0;
	int step = sqrt(size);

	if (!array || size == 0)
		return (-1);

	while (array[x] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		x += step;
		if (x >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", x - step, x);
	x -= step;

	while (array[x] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		x++;
		if (x == size)
			return (-1);
	}
	if (array[x] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		return (x);
	}
	return (-1);
}
