#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node a the end of
 * a dlistint list
 * @head: the pointer
 * @n: the data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		while (current->next)
			current = current->next;
		newNode->prev = current;
		current->next = newNode;
	}

	return (newNode);
}
