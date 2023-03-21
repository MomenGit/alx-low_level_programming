#include "main.h"

/**
 * times_table - prints the table of multiplications of base 10 numbers
 * @para: no parameters
 *
 * Return: On success 0.
 * On error, .
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar(i * 9);
		_putchar('\n');
	}
}
