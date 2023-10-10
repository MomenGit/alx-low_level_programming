#include "search_algos.h"

/**
 * recursive_binary - searches for a value in an array of integers
 * using the recursive binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @l: the left most index in array
 * @r: the right most index in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwise -1
 * on failure or array is NULL
 */
int recursive_binary(int *array, size_t l, size_t r, int value)
{
	size_t i, mid;

	if (r >= l)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = l + (r - l) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (recursive_binary(array, l, mid - 1, value));

		return (recursive_binary(array, mid + 1, r, value));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in an array of integers
 * using the recursive binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwise -1
 * on failure or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
