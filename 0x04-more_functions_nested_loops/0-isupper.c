#include "holberton.h"

/**
 * _isupper - check for uppercase character
 * @c: the character to test for uppercase
 *
 * Return: 1 if is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
