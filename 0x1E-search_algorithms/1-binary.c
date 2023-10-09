#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwise -1
 * on failure or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, m, r;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		m = l + (r - l) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}

	return (-1);
}
