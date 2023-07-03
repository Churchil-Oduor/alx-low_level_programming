#include "lists.h"

/**
 * sum_listint - sums all the data of a listint_t list.
 *
 * @head: head of the list.
 *
 * Return: sum of list node data and zero if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
