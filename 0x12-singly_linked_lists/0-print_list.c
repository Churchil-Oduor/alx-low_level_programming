#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int _strlen(char *str);
/**
 * print_list - prints al the elements of a list_t list.
 *
 * @h: head of the list.
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	int count;
	list_t *node;

	count = 1;
	node = malloc(sizeof(node));

	if (node == NULL)
	{
		printf("Error Occured\n");
		exit(1);
	}

	node = h->next;
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", _strlen(h->str), h->str);


	while (node != NULL)
	{
		count++;
		if (node->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", _strlen(node->str), node->str);

		if (node->next != NULL)
			node = (node->next);
		else
			break;
	}

	return (count);
}

/**
 * _strlen - counts the number of characters in a string.
 *
 * @str: string passed.
 * Return: number of characters in string @str.
 */

int _strlen(char *str)
{
	int count;

	count = 0;

	while (str[count] != '\0')
		count++;

	return (count);
}
