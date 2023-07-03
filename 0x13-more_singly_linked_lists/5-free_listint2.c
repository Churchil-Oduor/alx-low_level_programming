#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets the head to null;
 *
 * @head: pointer to head node.
 * Return:Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
}
