#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to be reallocated
 * @old_size: the old size of ptr
 * @new_size: the new size to reallocated
 *
 * Return: On success new pointer.
 * On error, NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *ptrd;
	unsigned int i, size;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (ptr != NULL)
	{
		size = (new_size > old_size) ? new_size : old_size;
		ptrd = ptr;
		for (i = 0; i < size; i++)
			new_ptr[i] = ptrd[i];
	}

	return (new_ptr);
}
