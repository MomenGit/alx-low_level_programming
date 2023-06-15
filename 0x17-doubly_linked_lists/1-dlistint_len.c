#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked dlistint_t list
 *
 * @h: a list node
 * Return: size_t length of dlist_int
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	len = 0;

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
