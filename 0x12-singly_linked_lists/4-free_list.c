#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees the malloc'ed memory that was allocated to the
 * nodes of the singly-linked-list.
 *
 * @head: pointer to the head of the singly linked list.
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = malloc(sizeof(temp));

	if (temp == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	while (1)
	{

		if (head->next == NULL)
		{
			free(head);
			break;
		}
		temp = head;
		head = head->next;
		free(temp);
	}
}
