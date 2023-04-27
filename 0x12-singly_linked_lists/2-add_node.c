#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 *
 * @head: address of the new head node.
 * @str: data of the new head node.
 * Return: address of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
		return (*head);
	}
	else
	{
		temp->str = (*head)->str;
		temp->len = (*head)->len;
		temp->next = (*head)->next;

		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = temp;

		return (*head);
	}
}
