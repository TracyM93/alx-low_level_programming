#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a list
 * @head: header pointer
 * Return:  the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new, *comp;
	size_t count_new = 0, count_comp = 0;

	new = head;
	comp = head;
	while (new != NULL)
	{
		while (count_new > count_comp)
		{
			if (new == comp)
			{
				printf("-> [%p] %d\n", (void *)new, new->n);
				return (count_new);
			}
			count_comp++;
			comp = comp->next;
		}
		comp = head;
		count_comp = 0;
		printf("[%p] %d\n", (void *)new, new->n);
		count_new++;
		new = new->next;
	}
	return (count_new);
}
