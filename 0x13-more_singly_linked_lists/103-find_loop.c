#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: A pointer to the head of the list.
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *beg = head;
	listint_t *end = head;

	if (!head)
		return (NULL);

	while (beg && end && end->next)
	{
		end = end->next->next;
		beg = beg->next;
		if (end == beg)
		{
			beg = head;
			while (beg != end)
			{
				beg = beg->next;
				end = end->next;
			}
			return (end);
		}
	}

	return (NULL);
}
