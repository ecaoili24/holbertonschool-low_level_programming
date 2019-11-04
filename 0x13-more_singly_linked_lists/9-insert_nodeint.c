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
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (idx - 1 != i)
	{
		i++;
		position = position->next;
	}
	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);

	start->n = n;

	if (idx == 0)
	{
		start->next = *head;
		*head = start;
	}
	else if (position)
	{
		start->next = position->next;
		position->next = start;
		start->n = n;
	}
	return (start);
}