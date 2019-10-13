#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: result of the muliplication, the product (0 for success)
 * and 1 for error (if the program receives no arguments)
 */
int main(int argc, char *argv[])
{

	int i;
	int product = 1;

	if (argc <= 2)
	{
		printf("Error\n");
	return (1);
	}

	for (i = 1; i < argc; i++)
		product = product * atoi(argv[i]);
	printf("%i\n", product);
	return (0);

}
