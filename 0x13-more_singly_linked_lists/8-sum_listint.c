#include "lists.h"

/**
 * sum_listint - finds the sum of all the data(n) of a listint_t linked list
 * @head: pointer to the head node in the list
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int amount = 0;

	while (head != NULL)
	{
		amount = head->n;
		head = head->next;
	}
	return (amount);
}
