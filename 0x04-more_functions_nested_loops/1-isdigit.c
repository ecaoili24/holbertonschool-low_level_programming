#include "holberton.h"

/**
 * _isdigit - check for a digit from 0-9
 * @c: the character to be checked
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
