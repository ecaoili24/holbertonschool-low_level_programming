#include <stdio.h>

/**
 * main - prints the number of argumeents passed into it
 * @argc: argument count
 * @argv: is an array (vector) holding pointers to the string arguments passed
 * on the command line
 *
 * Return: A number
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);

	return (0);
}
