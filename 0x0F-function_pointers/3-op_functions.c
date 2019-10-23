#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two integers (a + b)
 * @a: integer a
 * @b: integer b
 *
 * Return: the sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers (a - b)
 * @a: integer a
 * @b: integer b
 *
 * Return: the difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers (a * b)
 * @a: integer a
 * @b: integer b
 *
 * Return: the product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divided two integers (a / b)
 * @a: integer a
 * @b: integer b
 *
 * Return: the result of the division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder in division (a % b)
 * @a: integer a
 * @b: integer b
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
