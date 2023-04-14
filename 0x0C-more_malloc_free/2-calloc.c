#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array members
 * @size: size of member
 *
 * Return: On success pointer to allocated array.
 * On error, NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int length;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	length = nmemb * size;
	arr = malloc(length);

	if (arr == NULL)
		return (NULL);

	while (length)
		arr[--length] = 0;

	return (arr);
}
