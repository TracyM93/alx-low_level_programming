#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of
 * a listint_t linked list
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head != NULL)
	{
		pop = *head;
		*head = (*(head))->next;
		n = pop->n;
		free(pop);
		return (n);
	}
	return (0);
}
