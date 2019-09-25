#include "holberton.h"
/**
* _isalpha - checks for a upper case or lower case letter
* @c: checks for aphabetic characters
* Return: 1 if c, 0 for evertyhing else
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
