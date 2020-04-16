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
	int prev = 0;
	int x;
	int step = (int)floor(sqrt(size));

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[step] <= value && step < (int)size)
	{
		prev = step;
		step += (int)floor(sqrt(size));
		if (array[prev] < value)
			printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (step > (int)size - 1)
			break;
	}
	if (array[prev] >= value)
	{
		printf("Value found between indexes [%d] and [%d]\n", prev - (int)floor
		       (sqrt(size)), prev);
		prev -= (int)floor(sqrt(size));
	}
	else
		printf("Value found between indexes [%d] and [%d]\n", prev, step);
	for (x = prev; x < step && x < (int)size - 1; x++, prev++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
