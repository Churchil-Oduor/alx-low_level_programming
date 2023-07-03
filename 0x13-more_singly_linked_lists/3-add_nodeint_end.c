#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer to head-node of the list.
 * @n: data of the new node.
 * Return: address of the new element/node or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last_node;

	node = malloc(sizeof(node));
	last_node = malloc(sizeof(last_node));

	if (node == NULL || last_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		node->n = n;
		node->next = NULL;

		*head = node;
		return (*head);
	}

	node = *head;

	while (1)
	{
		if (node->next == NULL)
		{
			last_node->n = n;
			last_node->next = NULL;
			node->next = last_node;
			return (last_node);
		}

		node = node->next;
	}

	return (NULL);
}
