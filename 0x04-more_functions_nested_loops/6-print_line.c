#include "holberton.h"

/**
 * print_line - print a straight line using underscores
 * @n: the number of underscores to print
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');

	_putchar('\n');
}
