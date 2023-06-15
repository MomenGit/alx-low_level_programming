#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list
 *
 * @head: head of a double linked list
 * @index: index of node to be deleted
 * Return: 1 on success or -1 ow.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i;
	dlistint_t *current_node;

	if (*head == NULL)
		return (-1);

	current_node = *head;
	while (current_node->prev != NULL)
		current_node = current_node->prev;

	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;

	if (current_node == NULL)
		return (-1);

	if (current_node->prev != NULL)
		current_node->prev->next = current_node->next;
	else
		*head = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;

	free(current_node);

	return (1);
}
