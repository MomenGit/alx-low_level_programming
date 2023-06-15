#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint
 *
 * @head: head of a dlistint
 * Return: sum of data of dlistint
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
