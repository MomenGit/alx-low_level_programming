#include "lists.h"

/**
 * reverse_listint - ...
 *
 * @head: ...
 *
 * Return: ...
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	*head = (*head)->next;
	if (tmp->next->next != NULL)
	{
		reverse_listint(head);
	}

	tmp->next->next = tmp;
	tmp->next = NULL;

	return (*head);
}
