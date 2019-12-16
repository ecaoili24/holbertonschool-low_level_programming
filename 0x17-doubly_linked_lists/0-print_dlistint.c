#include "lists.h"

/**
 * size_t print_dlistint - a function that prints all the elements of a
 * dlistint_t
 * @h: the pointer to dlistint_t
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{

	const dlistint_t *current = h;
	size_t elements = 0;

	while (current)
	{
		printf("%d\n", current->n);

		current = current->next;
		elements++;
	}

	return (elements);
}
