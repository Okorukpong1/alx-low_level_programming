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
	listint_t *neo;

	neo = malloc(sizeof(listint_t));
	if (!neo)
		return (NULL);

	neo->n = n;
	neo->next = *head;
	*head = neo;

	return (neo);
}
