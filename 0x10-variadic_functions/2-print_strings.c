#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of variadic strings
 *
 * Return: Nothing.
 * On error, .
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_ptr;
	unsigned int i;
	char *word;

	if (n == 0)
		return;

	va_start(list_ptr, n);

	for (i = 0; i < n - 1; i++)
	{
		word = va_arg(list_ptr, char *);
		printf("%s", (word != NULL) ? word : "(nil)");
		printf("%s", (separator != NULL) ? separator : "");
	}
	word = va_arg(list_ptr, char *);
	printf("%s\n", (word != NULL) ? word : "(nil)");
}
