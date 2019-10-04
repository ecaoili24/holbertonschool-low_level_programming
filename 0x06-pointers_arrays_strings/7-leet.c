#include "holberton.h"

/**
 * leet - encode a string into 1337
 * @s: the string to create 1337
 *
 * Return: Encoded string
 */
char *leet(char *s)
{
	int i, x;

	char make1337[] = {'4', '3', '0', '7', '1'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 5; x++)
		{
			if ((s[i] == lower[x]) || (s[i] == upper[x]))
				(s[i] = make1337[x]);
		}
	}

	return (s);
}
