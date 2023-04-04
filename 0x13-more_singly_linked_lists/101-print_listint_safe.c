#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* find_listint_loop_pl - will find a loop in a list
* @head: list to search
*
* Return: address of the node where loop starts/ends, NULL if no loop found.
*/

listint_t *find_listint_loop_pl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
* print_listint_safe - prints a list, even if it has a loop
* @head: head of list to print
*
* Return: number of nodes printed
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t ten = 0;
	int loop;
	listint_t *loop_node;

	loop_node = find_listint_loop_pl((listint_t *) head);

	for (ten = 0, loop = 1; (head != loop_node || loop) && head != NULL; ten++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loop_node)
			loop = 0;
		head = head->next;
	}

	if (loop_node != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (ten);
}
