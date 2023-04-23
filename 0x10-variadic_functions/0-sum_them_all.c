#include "variadic_functions.h"

/**
 * sum_them_all - addition
 * @n: number of variadic parameters
 * @...: .....
 *
 * Return: On success sum of all its parameters.
 * On error, .
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ptr, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
