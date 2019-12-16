#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of
 * dlistint_t list
 * @index: the index of the node starting at 0
 * @head: the pointer
 *
 * Return: the nth node and  if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (index && current)
	{
		index--;
		current = current->next;
	}

	if (current)
		return (current);
	return (NULL);
}
