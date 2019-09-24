#include "holberton.h"
/**
* print_alphabet_x10 - prints alphabet 10 times from a to z
* Return: the lowercase alphabet
*/
void print_alphabet_x10(void)
{
char c;
int i;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
