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
	dlistint_t *current_node;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	current_node = *h;
	while (current_node->prev != NULL)
		current_node = current_node->prev;

	for (i = 0; i < idx && current_node != NULL; i++)
		current_node = current_node->next;

	if (current_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node;
	new_node->prev = current_node->prev;
	if (current_node->prev != NULL)
		current_node->prev->next = new_node;
	current_node->prev = new_node;

	return (current_node);
}
