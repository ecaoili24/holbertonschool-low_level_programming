#include "holberton.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s);
		s++;
	}
	else
		_putchar('\n');
}
