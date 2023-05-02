#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head, *loop_node = NULL;
    
    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;
        current = current->next;
        if (current == loop_node)
        {
            printf("-> [%p] %d\n", (void *)current, current->n);
            printf("-> Loop detected, exit\n");
            exit(98);
        }
        if (current != NULL && current < loop_node)
        {
            loop_node = current;
        }
    }
    
    return count;
}
