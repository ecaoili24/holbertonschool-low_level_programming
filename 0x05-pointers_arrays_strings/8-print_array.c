#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: pointer to an array
 * @n: the number of elements in an array
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j + 1 != n)
			printf(", ");
	}
	printf("\n");
}
