#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness - a function that checks the endianness
 * @n: the number
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;
	return (int)*c;
}
