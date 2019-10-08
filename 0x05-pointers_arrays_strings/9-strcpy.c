#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte ('\0')
 * @dest: the destination string
 * @src: the source string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];
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
