#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer length of the diagonal
 */
void print_diagonal(int n)
{
	int i;

	i = 0;

	while (n--)
	{
		while (i++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
