#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - a program that prints the minimum number of coins to make chnage for
 * an amount of money
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: If the number passed as the argument is negative, print 0
 * if the number of arguments passed to your program is not exactly 1,
 * print Error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		int cent[5] = {25, 10, 5, 2, 1};
		int i, count = 0, number = atoi(argv[1]);

		for (i = 0; i < 5; i += 1)
		{
			while (number >= cent[i])
			{
				number -= cent[i];
				count += 1;
			}
		}
	printf("%d\n", count);
	}
	return (0);
}
