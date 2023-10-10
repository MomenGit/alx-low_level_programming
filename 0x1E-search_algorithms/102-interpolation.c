#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * using the Interpolation search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwise -1
 * on failure or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			else
				return (-1);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));

		if (value < array[low] || value > array[high])
		{
			printf("Value checked array[%ld] is our of range\n", pos);
			return (-1);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
