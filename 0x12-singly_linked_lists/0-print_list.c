#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);

		else
			printf("[0] (nil)\n");

		h = h->next;
		i++;
	}
	return (i);
}
