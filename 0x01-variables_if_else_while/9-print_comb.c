#include <stdio.h>
/**
* main - print 0 to 9 with commas, spaces, and in ascending order
* description - nested loop
* Return: Always 0 (Success)
*/
int main(void)
{
int c;
c = 0;
while ('0' + c <= '9')
{
putchar('0' + c);
if (!('0' + c == '9'))
{
putchar (',');
putchar (' ');
}
c++;
}
putchar ('\n');
return (0);
}
