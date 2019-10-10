#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number
 *
 * Return: if no sq root return -1, otherwise return n
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	if (n == 0)
		return (n);

	return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - returns a sq root of a number
 * @n: a number
 * @i: the number to check
 *
 * Return: n, otherwise, -1
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt_helper(n, i + 1));
}
