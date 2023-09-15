#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints the data in the nodes of the list.
 * @h: head node of the list.
 * Return: total number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *node;
	size_t count;

	count = 1;

	if (h->prev == NULL && h->next == NULL)
		return (0);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		exit(EXIT_FAILURE);

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
		printf("%u\n", node->n);
		node = node->next;
		count++;
	}
	printf("%u\n", node->n);
	return (count);
}
