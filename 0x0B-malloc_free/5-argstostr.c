#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);
/**
 * argstostr - concantenate all the command line arguments
 * @ac: the number of arguments
 * @av: the argument values
 *
 * Return: pointer to newly allocated space containing the string or
 * otherwise, NULL, if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, c = 0;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length = length + _strlen(av[i]);

	cat = malloc(sizeof(char) * (length + ac + 1));
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *temp = av[i];

		for (j = 0; temp[j] != '\0'; j++)
		{
			cat[c] = temp[j];
			c++;
		}
	cat[c] = '\n';
	c++;
	}
	cat[c] = '\0';

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
