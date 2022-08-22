#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - adds a node at the start of a list_t list.
 * @head: pointer to first elements
 * @str: string
 * Return: the address of the new elements
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;
	
	*head = new;

	return (new);
}

