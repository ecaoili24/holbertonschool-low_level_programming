#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: the string in capital letters
 */
char *cap_string(char *s)
{
	int i, uppercase;

	uppercase = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= 'Z')
			uppercase = 0;
		else if (s[i] >= '0' && s[i] <= '9')
			uppercase = 0;
		else if ((s[i] >= 'a' && s[i] <= 'z') && uppercase == 1)
		{
			s[i] -= 32;
			uppercase = 0;
		}

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
		    || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
		    || s[i] == '\"' || s[i] == '(' || s[i] == ')'
		    || s[i] == '{' || s[i] == '}')
			uppercase = 1;
	}

	return (s);
}
