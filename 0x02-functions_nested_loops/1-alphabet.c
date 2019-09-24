#include "holberton.h"
/**
* print_alphabet - print lowercase alphabet with c incrementing by 1
* Return: lowercase alphabet a-z
*/
void print_alphabet(void)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar (c);
c++;
}
_putchar('\n');
}
