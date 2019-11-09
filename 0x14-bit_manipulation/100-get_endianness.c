#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		printf("Little endian");
	else
		printf("Big endian");
	_putchar();
	return (0);
}
