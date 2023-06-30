#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts the total number of nodes in the list.
 *
 * @h: pointer to head node.
 * Return: Number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	list_t *next_node;
	int count;

	count = 1;
	next_node = malloc(sizeof(list_t));

	if (next_node == NULL)
	{
		printf("Error\n");
		exit(1);
	}
	next_node = h->next;

	while (next_node != NULL)
	{
		count++;
		next_node = next_node->next;
	}

	return (count);
}
