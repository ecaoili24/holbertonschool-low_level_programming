#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: the argument count
 * @argv: argument values or a pointer to an array of strings
 *
 * Return: the name of the program
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
