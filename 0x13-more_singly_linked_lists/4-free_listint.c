#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t.
 *
 * @head: pointer to head node.
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
