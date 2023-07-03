#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the address of the head of the node.
 * @n: data of the to the new head node.
 * Return: address of the new element/node or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(new));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}

	new->n = (*head)->n;
	new->next = (*head)->next;

	(*head)->n = n;
	(*head)->next = new;

	return (*head);

}
