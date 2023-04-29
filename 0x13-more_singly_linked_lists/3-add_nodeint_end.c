#include "lists.h"

/**
 * add_nodeint_end - ...
 *
 * @head: ...
 * @n: ...
 *
 * Return: ...
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->n = n;

	if (*head != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new_node;
	}
	else
		*head = new_node;

	return (*head);
}
