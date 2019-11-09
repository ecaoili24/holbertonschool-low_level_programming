#include "holberton.h"
#include <stdlib.h>

/**
 * set_bit - a function that sets the value of a bit to 1 at a
 * given index
 * @n: the number to be converted
 * @index: the index of the bit you want to set, starting from 0
 *
 * Return: 1 for success or -1 for an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j = 0;
	unsigned long int mask = 1;

	while (mask > 0)
	{
		if (j == index)
		{
			*n = (mask | *n);
			return (1);
		}
		i += 1;
		mask = mask << 1;
	}
	return (-1);
}
