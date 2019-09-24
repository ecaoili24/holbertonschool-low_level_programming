#include <stdio.h>
/**
* main - print lowercase a to z in reverse
* description - use while statement
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
