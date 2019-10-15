#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the
 * string str
 * @str: the string to copy
 *
 * Return: a pointer to a duplicate string and NULL if it fails
 */
char *_strdup(char *str)
{
	int i, length;
	char *copy;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);
	copy = malloc(sizeof(char) * length + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	return (copy);
}
/**
 * _strlen - Returns the length of a string
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
