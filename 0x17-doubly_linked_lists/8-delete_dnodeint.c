#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes node at position = index.
 *
 * @head: head node of list.
 * @index: position of node to be deleted.
 * Return: 1 on success deletion else -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = *head;
	i = 0;

	if (index == 0)
	{
		if (node->next == NULL && node->prev == NULL)
		{
			node = NULL;
			return (1);
		}

		*head = node->next;
		(*head)->prev = NULL;

		return (1);
	}
	while (node != NULL)
	{
		if (i == index)
		{
			(node->prev)->next = node->next;
			(node->next)->prev = node->prev;
			free(node);
			return (1);
		}
		i++;
		node = node->next;
	}
	return (-1);
}
