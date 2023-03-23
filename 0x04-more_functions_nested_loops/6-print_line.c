#include "main.h"

/**
 * print_line - draws a straight line in the terminal using n of _
 * @n: integer number of _
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
			_putchar('1');
		_putchar('0' + i % 10);
	}
	_putchar('\n');
}
