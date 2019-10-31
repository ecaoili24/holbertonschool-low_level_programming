#include <stdio.h>
#include "lists.h"

/**
 * list_len - write a function that returns the number of elements
 * in a linked list
 * @h: the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
