#include "lists.h"

/**
 * pop_listint - ...
 *
 * @head: ...
 *
 * Return: the data (n) in head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;

	free(tmp);

	return (n);
}
