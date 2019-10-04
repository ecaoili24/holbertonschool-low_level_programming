#include "holberton.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of an array
 */
void reverse_array(int *a, int n)
{
	int tmp, x = 0;

	while (x < n - 1)
	{
		tmp = a[x];
		a[x] = a[n - 1];
		a[n - 1] = tmp;
		x++;
		n--;
	}
}
