#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - searches for the nth of a listint_t linked list.
 *
 * @head: head of the list.
 * @index: index of node searched beginning from node 0;
 * Return: data stored in the node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	while (head)
	{
		if (x == index)
			return (head);
		x++;
		head = head->next;
	}

	return (NULL);
}
