#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node specified
 * by index.
 *
 * @head: head node of list.
 * @index: position of the node in the list starting from 0.
 * Return: node at position index else NULL if node does not exit.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
