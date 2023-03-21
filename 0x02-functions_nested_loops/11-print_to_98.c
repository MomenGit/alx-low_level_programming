#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 * @n: input number
 *
 * Return: On success 0.
 * On error, .
 */
void print_to_98(int n)
{
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}

	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}

	printf("%d\n", 98);
}
