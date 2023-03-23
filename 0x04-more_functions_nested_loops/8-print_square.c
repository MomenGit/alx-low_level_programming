#include "main.h"

/**
 * print_square - draws a square on the terminal
 * @size: integer size of the drawn square
 */
void print_square(int size)
{
	int i, width;

	width = size;

	while (size--)
	{
		for (i = 0; i < width; i++)
			_putchar('#');

		_putchar('\n');
	}
}
