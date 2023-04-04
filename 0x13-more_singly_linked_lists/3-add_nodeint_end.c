#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - will add a new node at the end of the listint_t list
 * @head: double pointer will be placed at the head of the list
 * @n: integr that adds to a list.
 *
 * Return: address to the new node else NULL if error
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
