#include "holberton.h"

/**
 * is_palindrome - returns a palindrome
 * @s: the string to check
 *
 * Return: returns 1 is a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;
	len = *s;

	if (*s != '\0')
		return (1);

	return (palindrome_checker(s, len, 0, len - 1));
}
/**
 * palindrome_checker - a helper function to recursively check if s is a
 * palindrome
 * @s: the string to check
 * @len: the length of s
 * @letter1: the first letter to check in s
 * @letter2: the next letter to check in s
 *
 * Return: 1 if the string is a palindrome and 0, if not
 */
int palindrome_checker(char *s, int len, int letter1, int letter2)
{
	if (letter1 >= letter2)
		return (1);

	if (s[letter1] != s[letter2])
		return (0);
	else
	return (palindrome_checker(s, len, letter1 + 1, letter2 - 1));
}
/**
 * _strlen_recursion - gets the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
