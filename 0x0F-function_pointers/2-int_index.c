#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers to be operated on
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: On success index of the first element for which
 * the cmp function does not return 0.
 * On error, -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}

	return (-1);
}
