#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer holding the pointer to head node.
 * @idx: position of the node in the list starting from 0.
 * @n: data of the new node.
 * Return: node at position index else NULL if node does not exit.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node;

	node = *h;
	i = 0;
	while (node != NULL)
	{
		if (i == idx)
		{
			dlistint_t *new;

			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->prev = node->prev;
			new->next = node;

			(node->prev)->next = new;
			node->prev = new;

			return (new);
		}
		i++;
		node = node->next;
	}
	return (NULL);
}
