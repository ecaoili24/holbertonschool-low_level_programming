#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - A program that performs simple operations
 * @argc: the argument count and the four files needed to fit the
 * command line parameters
 * @argv: the argument vector that holds the command line parameters
 *
 * Return: 0 for success. If number of arguments is wrong, 98.
 * If operator is not +, -, *, /, or %, 99. 100, if divide
 * by / or % by zero.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((get_op_func)(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
