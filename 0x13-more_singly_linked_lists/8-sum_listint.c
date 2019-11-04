#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a
 * linked list
 * @head: the pointer to the list
 *
 * Return: the sum of the data of a linked list and if the list is empty,
 * return 0
 */
int sum_listint(listint_t *head)
{
	int nodesum = 0;

	while (head)
	{
	nodesum = nodesum + head->n;

	if (head->next)
		head = head->next;
	else
		break;
	}
	return (nodesum);
}
