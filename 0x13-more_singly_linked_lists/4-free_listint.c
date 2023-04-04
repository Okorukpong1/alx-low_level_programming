#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - this will make sure a listint_t list is free.
 * @head: list will have a pointer at the beginning
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
