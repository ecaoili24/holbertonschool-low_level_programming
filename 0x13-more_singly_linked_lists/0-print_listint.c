#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
