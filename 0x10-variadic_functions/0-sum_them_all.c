#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the numer of parameters
 *
 * Return: the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list v;

	if (n == 0)
		return (0);

	va_start(v, n);
	for (i = 0; i < n; i++)
		sum += va_arg(v, int);

	va_end(v);
	return (sum);
}
