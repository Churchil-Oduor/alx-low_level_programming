#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head node of linkedlist to be printed.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	listint_t *mem;
	int node_count;

	mem = malloc(sizeof(mem));
	if (mem == NULL)
		exit(1);

	mem->n = h->n;
	mem->next = h->next;

	node_count = 0;
	while (1)
	{
		if (mem->next == NULL)
		{
			++node_count;
			printf("%d\n", mem->n);
			return (node_count);
		}

		++node_count;
		printf("%d\n", mem->n);
		mem = mem->next;
	}
}
