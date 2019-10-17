#include <stdlib.h>
#include "holberton.h"
char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in an array
 * @size: the number of bytes in memory
 *
 * Return: a pointer to an allocated space in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
		if (p == NULL)
			return (NULL);

		_memset(p, 0, nmemb * size);
		return (p);
}
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: the memory to fill
 * @b: the constant byte
 * @n: the number of bytes to fill
 *
 * Return: a pointed to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
