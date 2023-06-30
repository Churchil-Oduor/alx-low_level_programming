#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list.
 *
 * @head: node to be added to the tail.
 * @str: data for the new added node.
 * Return: pointer to last node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *last_node;

	temp = malloc(sizeof(temp));
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

		temp = *head;
		while (1)
		{
			if (temp->next == NULL)
			{
				last_node = malloc(sizeof(last_node));
				if (last_node == NULL)
					return (NULL);

				last_node->str = strdup(str);
				last_node->len = strlen(str);
				last_node->next = NULL;

				temp->next = last_node;
				return (temp);
			}
			temp = temp->next;
		}
	}
	return (NULL);
}
