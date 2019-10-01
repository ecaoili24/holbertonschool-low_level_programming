#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: the string to print
 */
void print_rev(char *s)
{
	int length;

for (length = 0; *s != '\0'; s++)
length++;

s--;
length--;

for (; length >= 0; length--, s--)
	_putchar(*s);

	_putchar('\n');
}
