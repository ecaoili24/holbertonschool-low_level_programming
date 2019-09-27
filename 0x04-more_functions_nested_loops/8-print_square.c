#include "holberton.h"

/**
 * print_square - print a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int i, s;

	for (i = 1; i <= size; i++)
	{
		for (s = 1; s <= size; s++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
