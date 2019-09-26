#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - print all numbers from n to 98
* @n: the starting number
*/
void print_to_98(int n)
{
if (n < 98)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
}
else if (n > 98)
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
}
else
{
printf("%d\n", n);
return;
}
printf("98\n");
}

