#include "holberton.h"

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
