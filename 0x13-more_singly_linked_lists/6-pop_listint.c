#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and returns its data.
 * @head: pointer to a pointer to the head of the list.
 * Return: the value of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	value = temp->n;
	free(temp);
	return (value);
}
