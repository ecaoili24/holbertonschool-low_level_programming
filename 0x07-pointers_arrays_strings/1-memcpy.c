#include "holberton.h"

/**
 * _memcpy - copies n bytes from  memory area
 * @dest: the destination of where the copy source will go
 * @src: the source to copy from
 * @n: the number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
