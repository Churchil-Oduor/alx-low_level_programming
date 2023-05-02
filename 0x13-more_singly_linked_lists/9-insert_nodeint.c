#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: head of the list.
 * @idx: position where index is to be added starting at 0.
 * @n: data of the new node.
 * Return: address of new node else NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *node;

	node = NULL;
	index = 0;
	while(*head)
	{
		if (index == idx)
		{
			node->n = n;
			node->next = (*head)->next;
			printf("Found");
			(*head)->next = node;
			return (node);
		}

		++idx;
		*head = (*head)->next;
	}

	return (NULL);
}
