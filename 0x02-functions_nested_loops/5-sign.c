#include "main.h"

/**
 * print_sign - prints 1 for +ve no., -1 for -ve no. and 0 for 0
 * @n: input number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
