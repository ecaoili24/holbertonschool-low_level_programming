#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @src: the first string
 * @dest: the second string
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
			dest[len + i] = '\0';

	return (dest);
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
