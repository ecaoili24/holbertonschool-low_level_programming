#include <stdio.h>
/**
* main - prints all numbers of base 16 in lowercase
* description - while statement
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
c = 'a';
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
