#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * of a linked list
 * @head: header pointer
 * deint_at_index
 * @index: delete index of the node
 * Return: 1 if it succeeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *rmvnode;
	unsigned int i;

	i = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index - 1)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		rmvnode = temp;
		rmvnode = rmvnode->next;
		temp->next = rmvnode->next;
		free(rmvnode);
	}
	return (1);

