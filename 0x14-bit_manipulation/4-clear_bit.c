#include "holberton.h"
#include <stdlib.h>

/**
 * clear_bit - write a function that sets the value of a bit to 0
 * at a given index
 * @index: the index of the bit you want to set, starting from 0
 * @n: the number to convert
 *
 * Return: 1 for success, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j = 0;
	unsigned long int flag = 1;

	if (n == NULL)
		return (-1);

	if (index > 0 && *n == 0)
		return (1);

	while (flag > 0)
	{
		if (j == index)
		{
			*n = (flag ^ *n);
			return (1);
		}

		j += 1;
		flag = flag << 1;
	}
	return (-1);
}
