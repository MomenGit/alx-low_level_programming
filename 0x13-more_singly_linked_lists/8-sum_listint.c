#include "lists.h"

/**
 * sum_listint - ...
 *
 * @head: ...
 *
 * Return: ...
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
