#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 *
 */

void rev_string(char *s)
{
	int length;
	char *t = s;
	int i;

	for (length = 0; *t != '\0'; t++)
		length++;

	t--;
	length--;

for (i = 0; i <= length / 2; i++)
	{
char tmp = *t;
	*t = *s;
	*s = tmp;
	t--;
	s++;
	}
}
