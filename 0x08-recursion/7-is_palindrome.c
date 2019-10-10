#include "holberton.h"

/**
 * palindrome_checker - a helper function to recursively check if s is a
 * palindrome
 * @s: the string to check
 * @letter1: the first letter to check in s
 * @letter2: the next letter to check in s
 *
 * Return: 1 if the string is a palindrome and 0, if not
 */
int palindrome_checker(char *s, int letter1, int letter2)
{
	if (letter1 == letter2)
		return (1);

	if (s[letter1] != s[letter2])
		return (0);

	if (letter1 < letter2 + 1)
		return (palindrome_checker(s, letter1 + 1, letter2 - 1));
	return (1);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string
 *
 * Return: an integer whether it's 0 or 1
 */
int is_palindrome(char *s)
{
	int i;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
		counter += 1;

	if (counter == 0)
		return (1);

	return (palindrome_checker(s, 0, counter - 1));
}
