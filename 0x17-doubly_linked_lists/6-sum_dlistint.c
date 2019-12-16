#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data
 * @head: the pointer
 *
 * Return: the data (n) or if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	sum = 0;
	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
