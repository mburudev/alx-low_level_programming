#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the head pointer of the list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node == NULL)
	{
		return (NULL); /* Failed to allocate memory for new node */
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
