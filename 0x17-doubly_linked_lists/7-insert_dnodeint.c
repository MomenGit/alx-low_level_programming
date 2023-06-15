#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of dlistint
 * @idx: index of new inserted node
 * @n: new value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i;
	dlistint_t *new_node;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while ((*h)->prev != NULL)
		*h = (*h)->prev;

	for (i = 0; i < idx && *h != NULL; i++)
		*h = (*h)->next;

	new_node->n = n;
	new_node->next = (*h);
	new_node->prev = (*h)->prev;
	(*h)->prev->next = new_node;
	(*h)->prev = new_node;

	return (*h);
}
