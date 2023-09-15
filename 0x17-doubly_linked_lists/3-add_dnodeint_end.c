#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list.
 *
 * @head: head node of the list.
 * @n: int data to be stored in the list.
 * Return: address of the new element else NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;
	new->n = n;
	new->prev = current;
	new->next = NULL;
	current->next = new;
	return (new);
}
