#include "holberton.h"

/**
 * _strstr - finds the first occurence of the substring needle in the string
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i + j] != needle[j])
			break;

		if (needle[j + 1] == '\0')
			return (haystack + i);
	}
	}
	return (0);
}
