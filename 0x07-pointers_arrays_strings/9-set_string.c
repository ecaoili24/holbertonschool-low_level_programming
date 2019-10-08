#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer that sets the pointer to a char
 * @to: contains the pointer to a char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
