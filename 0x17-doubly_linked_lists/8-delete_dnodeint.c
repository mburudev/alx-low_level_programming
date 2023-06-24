#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index.
 * @head: Pointer to the head pointer of the list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	count = 0;
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
