#include "holberton.h"

/**
 * _puts - prints a string
 * @str: the string to print
 *
 */
void _puts(char *str)
{

for (; *str != '\0'; str++)
	_putchar(*str);

_putchar('\n');
}
