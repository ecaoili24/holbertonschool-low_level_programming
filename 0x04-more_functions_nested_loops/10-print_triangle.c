#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, t, spaces, hashes;

	for (i = 1; i <= size; i++)
	{
		spaces = size - i;
		hashes = size - spaces;

		for (t = 1; t <= spaces; t++)
			_putchar(' ');
		for (t = 1; t <= hashes; t++)
			_putchar('#');

		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
