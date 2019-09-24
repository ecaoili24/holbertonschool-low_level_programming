#include <stdio.h>
/**
* main - print numbers 0 to 9
* description - uses while statement
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
c = '0';
while (c <= '9')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
