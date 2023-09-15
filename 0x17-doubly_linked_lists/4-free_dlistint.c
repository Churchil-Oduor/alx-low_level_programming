#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t.
 *
 * @head: holds pointer to the head node of the list.
 */

void free_dlistint(dlistint_t *head)
{
	if (head->prev == NULL && head->next == NULL)
		free(head);
	else
	{
		dlistint_t *next;

		do {
			next = head->next;
			free(head);
			head = next;

		} while (next->next != NULL);
		free(next);
	}
}
