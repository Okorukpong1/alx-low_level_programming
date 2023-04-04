#include "lists.h"

/**
* free_listint_safe - thsi function free a list in safe mode
* @h: the head of list
* Description: this function free a string in a safe mode
* section header: the header of this function is lists.h
* Return: the size of the linked list
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *all;
	size_t p;
	int time;

	p = 0, all = *h;

	while (all)
	{
		time = all - all->next;
		if (time > 0)
		{
			tmp = all->next;
			free(all);
			all = tmp;
			p++;
		} else
		{
			free(all);
			*h = NULL;
			p++;
			break;
		}

	}

	*h = NULL;

	return (i);
}
