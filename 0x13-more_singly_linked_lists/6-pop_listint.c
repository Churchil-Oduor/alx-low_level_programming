#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list_int list
 * and returns the head node's data(n);
 *
 * @head: head of the list.
 * Return: head nodes data else 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *node;

	if (*head == NULL)
		return (0);

	node = malloc(sizeof(node));

	if (node == NULL)
		return (0);

	node = *head;
	data = node->n;
	*head = (*head)->next;

	free(node);

	return (data);
}
