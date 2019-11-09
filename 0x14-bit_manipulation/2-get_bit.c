#include "holberton.h"
#include <stdlib.h>

/**
 * get_bit - a function that returns the value of the a bit at a given index
 * @index: the index of the bit you want to get, starting at 0
 * @n: the coverted number
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j = 0;
	unsigned long int mask = 1;

	while (mask > 0)
	{
		if (j == index)
		{
			if ((mask & n) > 0)
				return (1);
			else
				return (0);
		}

		j += 1;
		mask = mask << 1;
	}
	return (-1);
}
