#include "lists.h"

/**
 * delete_nodeint_at_index - ...
 *
 * @head: ...
 * @index: ...
 *
 * Return: ...
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *deleted_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		deleted_node = *head;
		*head = (*head)->next;
		free(deleted_node);
		return (1);
	}

	current = *head;
	for (i = 0; current != NULL; i++)
	{
		if (i == index - 1)
		{
			deleted_node = current->next;
			current->next = deleted_node->next;
			free(deleted_node);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}
