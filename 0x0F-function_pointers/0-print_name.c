#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name of the person to print
 * @f: the pointer to the function to call when printing
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL)
		return;

	(*f)(name);
}
