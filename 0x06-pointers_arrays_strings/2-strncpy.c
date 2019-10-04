#include "holberton.h"

/**
 * _strncpy - copies a string
 * @src: the string to copy
 * @dest: destination string
 * @n: bytes of src to use
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
