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
	size_t nom = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nom++;
		h = h->next;
	}

	return (nom);
}
