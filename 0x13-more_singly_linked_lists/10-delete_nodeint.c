#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index of a linked list
 * @head: a pointer to the list
 * @index: the index of the node that should be deleted, starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *delete = NULL;

	if (head == NULL || (*head) == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (index != i && temp != NULL)
	{
		delete = temp;
		temp = temp->next;
		i += 1;
	}

	if (index != i)
	{
		return (-1);
	}

	if (delete == NULL)
		return (-1);

		delete->next = temp->next;
		free(temp);
		return (1);
}
