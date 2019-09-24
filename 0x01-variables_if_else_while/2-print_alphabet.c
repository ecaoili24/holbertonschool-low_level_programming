#include <stdio.h>
/**
* main - prints a to z with c program incrementing by 1
* description - uses while statement
* Return: Always 0 (Success)
*/
int main(void)
{ char c;
c = 'a';
while (c <= 'z')
{
putchar (c);
c++;
}
putchar ('\n');
return (0);
}
