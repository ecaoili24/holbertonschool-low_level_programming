#include "search_algos.h"
int find_min(int a, int b);
/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array to be searched
 * @size: the length of the array
 * @value: the value to be searched in the array
 * Return: returns the index of the array found, if not found or the array is
 * empty it returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = (int)floor(sqrt(size));
	int prev = 0;

	if (!array || size == 0)
		return (-1);

	while (array[find_min(step, size) - 1] < value)
	{
		prev = step;
		step += (int)floor(sqrt(size));
		if (prev >= (int)size)
			return -1;
	}
	while (array[prev] < value)
	{
		prev++;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (prev == find_min(step, size))
			return (-1);
	}
	if (array[prev] == value)
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);

	return (-1);
}

/**
 * find_min - a function that searches for the minimum value
 * @a: an integer
 * @b: an integer
 *
 * Return: returns the min value found, if not found, return -1
 */
int find_min(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}
