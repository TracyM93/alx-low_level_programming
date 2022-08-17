#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a linked list
 * @head: header pointer
 * Return: returns the sum of all the data (n) of linked list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (head == NULL)
		return (0);
	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
