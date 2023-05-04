#include "main.h"

/**
 * print_rec - prints the binary representation of a number
 * @n: integer number to operated on
 *
 * Return: Nothing.
 */
void print_rec(unsigned long int n)
{
	if (n)
	{
		print_rec(n >> 1);
		_putchar('0' + (n & 1));
	}
}

/**
 * print_binary - prints the binary representation of a number
 * @n: integer number to operated on
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_rec(n);
}
