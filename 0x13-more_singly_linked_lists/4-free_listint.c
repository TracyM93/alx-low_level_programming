#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: header pointer
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
