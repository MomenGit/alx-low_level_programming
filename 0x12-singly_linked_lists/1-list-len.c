#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list
 *
 * @h: pointer to a list
 *
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
