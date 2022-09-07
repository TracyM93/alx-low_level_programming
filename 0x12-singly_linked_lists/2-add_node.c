#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function to add node at the beginning of list
 * @head: input header pointer
 * @str: input string value
 * Return: the address of the new element  or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = str;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
