#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer number to be operated on
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	return (n & 1);
}