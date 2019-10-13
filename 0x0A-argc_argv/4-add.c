#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: if one of the number contains symbols that are not digits, print
 * Error and return 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int j, length;
	char *s;

	for (i = 1; i < argc; i++)
	{
		s = (argv[i]);
		length = strlen(s);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(s + j)) == 0)
				{
					printf("Error\n");
				return (1);
				}
			}

			sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
