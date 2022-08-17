#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function to free list
 * @head: pointer to the pointer of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*(head))->next;
		free(temp);
	}
	*head = NULL;
}
