#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position
 * @head: the pointer to the list
 * @idx: the index of the list where the new node should be added,
 * starts at 0
 * @n: the integer
 *
 * Return: the address of the new node, or NULL, if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *start;
	listint_t *position = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	start = *head;

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);

	start->n = n;

	for (i = 0; start != NULL; i++)
	{
		if (idx - 1 == i)
		{
			start->next = position->next;
			position->next = start;
			return (start);
		}
		position = position->next;
	}

	if (idx == 0)
	{
		start->next = *head;
		*head = start;
		return (start);
	}
	free(start);
	return (NULL);
}
