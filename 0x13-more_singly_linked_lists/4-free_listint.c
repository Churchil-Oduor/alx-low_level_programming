#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t.
 *
 * @head: pointer to head node.
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t **node;

	node = malloc(sizeof(node));
	if (node == NULL)
		exit(1);

	if (head->next == NULL)
		free(head);

	*node = head;
	head = head->next;

	while (1)
	{
		free(*node);
		*node = head;
		head = head->next;
		if (head->next == NULL)
		{
			free(*node);
			free(head);
			break;
		}

	}

	free(node);
}
