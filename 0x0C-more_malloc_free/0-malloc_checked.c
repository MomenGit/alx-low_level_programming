#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
		exit(3);

	return (pointer);
}
