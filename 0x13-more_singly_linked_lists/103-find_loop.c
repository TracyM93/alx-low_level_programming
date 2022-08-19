#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the list
 * Return: address of the node or null
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *addr;

	loop = addr = head;
	while (loop != NULL && addr != NULL)
	{
		addr = addr->next;
		loop = loop->next->next;
		if (loop == addr)
		{
			loop = head;
			while (addr != loop)
			{
				addr = addr->next;
				loop = loop->next;
			}
			return (addr);
		}
	}
	return (NULL);
}
