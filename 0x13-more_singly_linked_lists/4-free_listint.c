#include "lists.h"

/**
 * free_listint - ...
 *
 * @head: ...
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
