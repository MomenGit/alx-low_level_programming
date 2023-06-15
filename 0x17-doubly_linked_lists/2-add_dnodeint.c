#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: node of dlistint
 * @n: new value
 * Return: dlistint_t*
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	else
	{
		new_node->next = NULL;
	}
	*head = new_node;

	return (new_node);
}
