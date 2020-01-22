#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HT;

	HT = malloc(sizeof(hash_table_t));

	if (size <= 0)
		return (NULL);

	if (!HT)
	{
		return (NULL);
	}

	HT->size = size;
	HT->array = calloc(size, sizeof(hash_table_t *));
	if (!HT->array)
	{
		free(HT);
		return (NULL);
	}

	return (HT);
}
