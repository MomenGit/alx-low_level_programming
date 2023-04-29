#include "lists.h"

/**
 * free_listint2 - ...
 *
 * @head: ...
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = *head;
	}
	*head = NULL;
}
