#include "main.h"

/**
 * times_table - prints the table of multiplications of base 10 numbers
 *
 * Return: On success 0.
 * On error, .
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;

			if (res >= 10)
				_putchar(res / 10 + 48);
			else if (res > 0)
				_putchar(' ');

			_putchar(res % 10 + 48);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
