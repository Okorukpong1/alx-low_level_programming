#include <stdlib.h>
#include "lists.h"

/**
* listint_len - Prints the number of elemets in linked listint_t list
* @h: Pointer to the head node of the linked list
*
* Return: the number of blue in a linked list
*/

size_t listint_len(const listint_t *h)
{
size_t nom = 0;

	while (h)
	{
		nom++;
		h = h->next;
	}

	return (nom);
}
