#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: the pointer to the new allocated space in memory
 */
int *array_range(int min, int max)
{
	int *array, len, i;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	array = malloc(sizeof(int) * len);
		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < len; i++)
		{
			array[i] = min;
			min++;
		}

	return (array);
}
