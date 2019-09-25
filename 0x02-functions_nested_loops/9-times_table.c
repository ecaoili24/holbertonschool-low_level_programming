#include "holberton.h"
/**
* times_table - Print the nine times table
*/
void times_table(void)
{
int i;
int e;
for (i = 0; i < 10; i++)
{
for (e = 0; e < 10; e++)
{
if (e == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
}
else
{
if ((i * e) < 10)
_putchar(' ');
else
_putchar(i * e / 10 + '0');
_putchar(i * e % 10 + '0');
if (e == 9)
{
_putchar('\n');
}
else
{
_putchar(',');
_putchar(' ');
}
}
}
}
}
