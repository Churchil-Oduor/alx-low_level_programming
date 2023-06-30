#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds node at the beginnning of the list.
 *
 * @head: pointer to head pointer.
 * @str: data for the next node.
 * Return: pointer to the new head node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;


	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = NULL;

		*head = temp;
		return (*head);
	}
	else
	{
		temp->str = strdup((*head)->str);
		temp->len = strlen((*head)->str);
		temp->next = (*head)->next;

		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = temp;
		return (*head);
	}

}
