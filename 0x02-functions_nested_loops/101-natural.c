#include <stdio.h>
/**
* main - Print the sum of all the multiples of 3 or 5 below 1024
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
int sum;
sum = 0;
for (a = 1; a < 1024; a++)
{
if ((a % 5 == 0) || (a % 3 == 0))
sum += a;
}
printf("%d\n", sum);
return (0);
}
