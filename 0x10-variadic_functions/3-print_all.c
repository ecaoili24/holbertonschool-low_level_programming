#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * c for character, i for integer, f for float, s for character string
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s, *str = "(nil)";
	va_list v;

	va_start(v, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(v, int));
			break;
		case 'i':
			printf("%d", va_arg(v, int));
			break;
		case 'f':
			printf("%f", va_arg(v, double));
			break;
		case 's':
			s = va_arg(v, char *);
			if (s != NULL)
				str = s;
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
	    i++;
	}
	printf("\n");
	va_end(v);
}
