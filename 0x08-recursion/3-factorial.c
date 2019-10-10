#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: a number
 *
 * Return: if n is less than 0, the function returns -1 and if it's equals 0, it
 * it returns 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
