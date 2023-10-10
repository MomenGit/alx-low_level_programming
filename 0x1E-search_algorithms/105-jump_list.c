#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a singly linked list of integers
 * using the jump search algorithm
 *
 * @list: a pointer to the first element of the list to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwise -1
 * on failure or array is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step_size, i;
	listint_t *current, *prev;

	if (list == NULL)
		return (NULL);

	step_size = (unsigned long)sqrt(size);

	prev = list;
	current = list;
	while (current->n <= value)
	{
		if (current->index == size - 1)
			break;
		prev = current;
		for (i = 0; i < step_size && current->next != NULL; i++)
			current = current->next;
		printf("Value checked array[%ld] = [%d]\n", current->index, current->n);
		if (current->index == size - 1)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   prev->index, current->index);

	for (i = 0; i < step_size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}

	return (NULL);
}
