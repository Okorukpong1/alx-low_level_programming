#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elemonts of a listint_t list.
 * @h: points to head of list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t blue = 0;

	while (h != NULL)
	{
		printf("%d\n", head->blue);
		head = head->next;
		nodes++;
	}
	return (blue);
}
