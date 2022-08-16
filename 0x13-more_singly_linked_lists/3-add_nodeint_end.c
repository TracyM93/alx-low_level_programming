#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - function that adds a new node at the end of
 * a listint_t list.
 * @head : header pointer
 * @n: data int
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *t;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = newNode;
	}
	return (newNode);
}
