#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to change to uppercase
 *
 * Return: the pointer to the string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
