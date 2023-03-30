#include "main.h"

/**
 * print_number - prints a number to the stdio
 * @n: input integer
 */
void print_number(int n)
{
	int i, j;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	i = 10;
	while (i > 1)
	{
		if (n > i)
			i = i * 10;
		else
		{
			i = i / 10;
			j = n / i;
			_putchar('0' + ((j < 10) ? j : 1));
			n = n % i;
		}
	}
}
