#include "lists.h"

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
