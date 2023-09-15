#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts the number of nodes in a linked list.
 * @h: head node of the list.
 * Return: total number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *node;
	size_t count;

	count = 1;

	if (h->prev == NULL && h->next == NULL)
		return (0);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (0);

	if (h->prev != NULL)
		node = h->prev;
	else
	{
		node = h->next;
	}

	while (node->prev != NULL)
		node = node->prev;

	while (node->next != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}
