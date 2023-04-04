#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node with instruction
* of a listint_t linked list
* @head: double pointer to the head of the list
* @index: the index of the node that'll be deleted
* Return: 1 if it succeeds, or
* -1 if it fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *current_node = *head, *temp;

	if (!current_node)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);

		return (1);
	}

	while (current_node->next && ((p + 1) != index))
	{
		current_node = current_node->next;
		p++;
	}

	if ((p + 1) == index && current_node->next)
	{
		temp = current_node->next;
		current_node->next = temp->next;
		free(temp);

		return (1);
	}

	return (-1);
}
