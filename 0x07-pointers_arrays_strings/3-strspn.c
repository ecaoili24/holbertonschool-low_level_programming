#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: the number of bytes in the initial segment s which consist of bytes
 * from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (count);
}
