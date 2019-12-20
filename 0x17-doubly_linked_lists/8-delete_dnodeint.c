#include "lists.h"
/**
 * dlistint_len - a function that prints all the elements of a dlistint_t
 * @h: the pointer to dlistint_t
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{

	const dlistint_t *current = h;
	size_t elements = 0;

	while (current)
	{
		current = current->next;
		elements++;
	}

	return (elements);
}

/**
 * delete_dnodeint_at_index - a function that deletes the node at index index of
 * a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index:the index of the node to delete
 *
 * Return: 1 for success, -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(current) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = current->next;
		if (current->next)
			current->next->prev = NULL;
		current->next = NULL;
		free(current);
		return (1);
	}
	while (i < index)
	{
		current = current->next;
		i++;
	}
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
