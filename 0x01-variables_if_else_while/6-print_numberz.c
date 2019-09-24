#include <stdio.h>
/**
* main - print numbers 0 to 9
* description - use variable int
* Return: Always 0 (Success)
*/
int main(void)
{
int c;
c = 0;
while ('0' + c <= '9')
{
putchar('0' + c);
c++;
}
putchar('\n');
return (0);
}
