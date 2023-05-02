#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		count++;
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
			printf("-> Loop detected, exit\n");
			exit(98);
		}
	}
	while (head != slow)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	printf("[%p] %d\n", (void *)head, head->n);
	return (count + 1);

