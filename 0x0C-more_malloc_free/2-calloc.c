#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array members
 * @size: size of member
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *mod_arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	mod_arr = arr;
	while (size)
		mod_arr[size--] = 0;

	return (arr);
}
