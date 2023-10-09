#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwise -1
 * on failure or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step_size, i;

	if (array == NULL)
		return (-1);

	step_size = (unsigned long)sqrt(size);

	for (i = 0; i < size; i += step_size)
	{
		if (array[i] >= value)
			break;

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		   i - step_size, i);
	i = i - step_size;
	step_size = i + step_size;
	for (; i <= step_size && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
