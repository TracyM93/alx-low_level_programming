#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function to reverse a linked list.
 * @head:pointer to the pointer of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old, *temp;

	if (*head == NULL)
		return (NULL);
	if ((*(head))->next == NULL)
		return (*head);
	old = *head;
	*head = NULL;
	while (old != NULL)
	{
		temp = old->next;
		old->next = *head;
		*head = old;
		old = temp;
	}
	return (*head);
}
