#include "holberton.h"
/**
* _islower - checks for lowercase letter
* @c: lowercase letters
* Return: 1 if c, 0 for everything else
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
