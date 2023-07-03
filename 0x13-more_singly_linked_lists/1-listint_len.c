#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts the number of nodes in listint_t list.
 *
 * @h: head node of listint_t list.
 * Return: number of elements/nodes in list.
 */

size_t listint_len(const listint_t *h)
{
	listint_t *node;
	int node_count;

	node = malloc(sizeof(node));
	if (node == NULL)
		exit(1);

	node->n = h->n;
	node->next = h->next;

	node_count = 0;
	while (1)
	{
		++node_count;

		if (node->next == NULL)
			return (node_count);

		node = node->next;
	}
	return (-1);
}
