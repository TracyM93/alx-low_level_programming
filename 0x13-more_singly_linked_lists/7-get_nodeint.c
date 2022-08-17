#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node at index function
 * @head: header pointer
 * @index: index
 * Return: the nth node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (temp);
}
