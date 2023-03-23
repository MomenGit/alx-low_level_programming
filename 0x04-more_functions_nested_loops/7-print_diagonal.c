#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer length of the diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	j = 0;

	if (n > 0)
	{
		while (n--)
		{
			for (i = 0; i < j; i++)
				_putchar(' ');

			j++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
