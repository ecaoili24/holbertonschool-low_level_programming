#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @n: the number of strings passed to the fuction
 * @separator: is the string to be printed between the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list v;
	char *s;

	va_start(v, n);

	for (; i < n; i++)
	{
		s = va_arg(v, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL  && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(v);
}
