#include "main.h"

/**
 * print_square - draws a square on the terminal
 * @size: integer size of the drawn square
 */
void print_square(int size)
{
	int height, width;

	height = size;
	width = size;

	if (size > 0)
	{
		while (size--)
		{
			for (width = 0; width < height; width++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
