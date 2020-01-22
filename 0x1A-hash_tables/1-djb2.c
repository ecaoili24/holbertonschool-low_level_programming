#include "hash_tables.h"

/**
 * unsigned long int hash_djb2 - a hash function using the djb2 algo
 * @str: the pointer to the string
 *
 * Return: a hash index corresponding to the str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
