#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: prints the string
 *
 */
void puts_half(char *str)
{
	int i = 0;

	for (i = (_strlen(str) + 1) / 2; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}

_putchar('\n');
}
/**
 * _strlen - length of a string
 * @s: the string to check
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
