#include "holberton.h"

/**
 * print_diagonal - prints a diagnoal (\) line
 * @n: the number of (\) to print
 */
void print_diagonal(int n)
{
	int i, b;

	for (i = 1; i  <= n; i++)
	{
		for (b = 1; b < i; b++)
		_putchar(' ');

	_putchar('\\');
	_putchar('\n');
}

if (n <= 0)
	_putchar('\n');
}
