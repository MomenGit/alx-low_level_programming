#include "lists.h"

/**
 * add_dnodeint_end -
 *
 * @head: node of dlistint
 * @n: new value
 * Return: dlistint_t* new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		new_node->prev = *head;
		(*head)->next = new_node;
	}
	else
	{
		new_node->prev = NULL;
	}
	*head = new_node;
	return (*head);
}
