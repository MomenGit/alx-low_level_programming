#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: the head of the list
 * @index: the index of the node starting at 0
 *
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head != NULL)
			head = head->next;
		else
			break;
	}

	if (i == index)
		return (head);
	else
		return (NULL);
}
