#include "variadic_functions.h"

/**
 * separate - prints separator
 *
 * @format: a list of types of arguments passed to the function
 * @i: index
 */
void separate(const char *const format, int i)
{
	if (format[i + 1] != '\0')
		printf(", ");
	else
		printf("\n");
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char *const format, ...)
{
	int i;
	va_list list_ptr;

	va_start(list_ptr, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list_ptr, int));
			separate(format, i);
			break;
		case 'i':
			printf("%d", va_arg(list_ptr, int));
			separate(format, i);
			break;
		case 'f':
			printf("%f", va_arg(list_ptr, double));
			separate(format, i);
			break;
		case 's':
			printf("%s", va_arg(list_ptr, char *));
			separate(format, i);
			break;
		}
		i++;
	}
}
