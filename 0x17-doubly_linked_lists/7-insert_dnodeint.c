#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a
 * given position
 * @h: the pointer
 * @idx: the index of the list where the new node should be added
 * @n: the data
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *newNode;
	unsigned int i = 1;

	if (h && *h ==  NULL)
		return (NULL);
	if (idx != 0)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		if (*h)
			current->prev = newNode;
		*h = newNode;
		newNode->prev = NULL;
		newNode->next = current;
		return (newNode);
	}
	for (; i < idx; i++)
	{
		current = current->next;
		if (current == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->prev = current;
	newNode->next = current->next;
	if (current->next)
		current->next->prev = newNode;
	current->next = newNode;
	return (newNode);
}
