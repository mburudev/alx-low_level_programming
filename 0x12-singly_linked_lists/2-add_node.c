#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list.
 * @str: string to be added to the new node.
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_1;

	node_1 = malloc(sizeof(list_t));
	if (node_1 == NULL)
	{
		return (NULL);
	}
	node_1->str = strdup(str);
	if (node_1->str == NULL)
	{
		free(node_1);
		return (NULL);
	}
	node_1->len = strlen(str);
	node_1->next = *head;
	*head = node_1;
	return (node_1);
}
