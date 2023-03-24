#include "main.h"

/**
 * print_number - description
 * @n: input integer
 */
void print_number(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');

	while (n)
	{
		if (n > i)
			i = i * 10;
		else
		{
			i = i / 10;
			_putchar('0' + n / i);
			n = n % i;
		}
	}
}
