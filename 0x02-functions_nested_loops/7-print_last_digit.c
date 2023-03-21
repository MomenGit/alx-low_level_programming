#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @n: input number
 *
 * Return: On success n % 10.
 * On error, .
 */
int print_last_digit(int n)
{
	int res;

	res = (n > 0) ? n % 10 : -(n % 10);

	_putchar('0' + res);
	return (res);
}
