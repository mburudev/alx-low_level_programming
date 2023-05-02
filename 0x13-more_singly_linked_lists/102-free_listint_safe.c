#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *slow, *fast, *tmp;

	if (h == NULL || *h == NULL)
		return (count);
	slow = *h;
	fast = (*h)->next;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			tmp = slow;
			slow = slow->next;
			free(tmp);
			count++;
			break;
		}
		tmp = slow;
		slow = slow->next;
		fast = fast->next->next;
		free(tmp);
		count++;
	}
	while (slow != NULL)
	{
		tmp = slow;
		slow = slow->next;
		free(tmp);
		count++;
	}
	*h = NULL;
	return (count);
}
