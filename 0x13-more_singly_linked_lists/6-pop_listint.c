#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - delete the node of listint_t
* andwill also return the head node's data @n
* @head: Double pointer the head list
* Return: The head node's data n, else  0 if empty
*/

int pop_listint(listint_t **head)
{
	listint_t *delete_node;
	int d;

	if (*head == NULL)
		return (0);

	delete_node = *head;
	*head = delete_node->next;
	d = delete_node->d;
	free(delete_node);

	return (d);
}
