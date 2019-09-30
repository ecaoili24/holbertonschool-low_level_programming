#include "holberton.h"

/**
 * swap_int - switch the values of two integers
 * @a: the first integer to switch
 * @b: the second integer to swap
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
