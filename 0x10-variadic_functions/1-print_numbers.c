#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of variadic integers
 *
 * Return: Nothing.
 * On error, .
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return;

	va_start(ptr, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ptr, int), (separator != NULL) ? separator : "");

	printf("%d\n", va_arg(ptr, int));
	va_end(ptr);
}
