#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: the head of listint_t
 * @idx: the index to be inserted at
 * @n: the data of the new node
 *
 * Return: ...
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}

	current = *head;
	prev = NULL;
	for (i = 0; current != NULL; i++)
	{
		if (i == idx)
		{
			new_node->next = current;
			if (prev != NULL)
				prev->next = new_node;
			return (new_node);
		}
		prev = current;
		current = current->next;
	}
	if (i == idx)
	{
		prev->next = new_node;
		return (new_node);
	}

	return (NULL);
}
