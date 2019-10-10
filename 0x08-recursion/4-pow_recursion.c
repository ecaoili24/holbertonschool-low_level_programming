#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @y: the exponent and if it's less than 0, return -1
 * @x: the base value
 *
 *Return: y, the power value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
