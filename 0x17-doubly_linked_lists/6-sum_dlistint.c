#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sums up all the data in the list.
 *
 * @head: head node of the list.
 * Return: sum of the data contained in the nodes of the list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
