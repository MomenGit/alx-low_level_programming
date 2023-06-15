#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: node of dlistint
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->prev != NULL)
		head = head->prev;

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
