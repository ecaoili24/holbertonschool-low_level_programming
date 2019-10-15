#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer that has contents of s1 and s2 and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size1, size2;
	char *cat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	cat = malloc(sizeof(char) * size1 + size2 + 1);
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		cat[i] = s1[i];

	for (j = 0; j < size2; j++)
	{
		cat[i] = s2[j];
		i++;
	}

	cat[i] = '\0';

	return (cat);
}
/**
 * _strlen - Return the length of a string
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
