#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: header pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp2;

	tmp2 = *head;
	while (tmp2 != NULL && head != NULL)
	{
		tmp = tmp2;
		tmp2 = tmp2->next;
		free(tmp);
	}
	*head = NULL;
}
