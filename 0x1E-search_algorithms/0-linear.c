#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the pointer to the first element of array to search
 * @value: the value to search
 * @size: the number of elements in an array
 *
 * Return: the first index where value is located otherwise
 * -1 if value is not in array or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL || size <= 0)
		return (-1);

	for (idx = 0; array && idx < size; idx++)
	{
		printf("Value checked array[%lu = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
