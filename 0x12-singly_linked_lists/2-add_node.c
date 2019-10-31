#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include "string.h"
int _strlen(const char *s);

/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: pointer to the list
 * @str: the string
 *
 * Return: the address of the new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head || !str)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * _strlen - return the length of a string
 * @s: the string to check
 *
 * Return: The lenght of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
