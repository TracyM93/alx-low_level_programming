#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a list
 * @h: pointer to the pointer of the list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count_new = 0, count_comp = 0;
	listint_t *temp, *head, *comp;

	if (h == NULL || *h == NULL)
		return (0);
	head = comp = temp = *h;
	count_new = 0;
	while (head != NULL)
	{
		comp = *h;
		count_comp = 0;
		while (count_new > count_comp)
		{
			if (temp == comp)
			{
				*h = NULL;
				return (count_new);
			}
			count_comp++;
			comp = comp->next;
		}
		count_new++;
		temp = head->next;
		free((void *)head);
		head = temp;
	}
	*h = temp;
	return (count_new);
}
