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

	data = 0;

	if (*head)
	{
		node = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = node;
	}

	return (data);
}
