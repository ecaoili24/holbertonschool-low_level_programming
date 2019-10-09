#include "holberton.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	if (*s != '\0')
	{	_putchar(*s);
		_puts_recursion(s + 1);
	}
}
