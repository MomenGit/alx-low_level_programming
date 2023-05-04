#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first operand
 * @m: second operand
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits;
	unsigned int num;

	bits = n ^ m;
	num = 0;
	while (bits)
	{
		if (bits & 1)
			num++;
		bits = bits >> 1;
	}
	return (num);
}
