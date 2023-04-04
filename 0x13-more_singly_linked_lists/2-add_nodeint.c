#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - Adds new node at the begining of a listint_t list
* @n: Nodes in the @listint_t
*
* @head: a double pointer at the beginnig of a listint_t list
* Return: The address of the new element,and return NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_blue_head = malloc(sizeof(listint_t));

	if (new_blue_head == NULL)
		return (NULL);

	new_blue_head->n = n;
	new_blue_head->next = *head;
	*head = new_blue_head;
	return (new_blue_head);
}
