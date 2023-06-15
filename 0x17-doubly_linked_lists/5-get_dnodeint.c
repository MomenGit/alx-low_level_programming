#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: head of dlistint
 * @index: index of node to be returned
 * Return: dlistint_t* node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
