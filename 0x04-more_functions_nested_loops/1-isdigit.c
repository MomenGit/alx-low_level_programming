#include "main.h"

/**
 * _isdigit - check if the input number is a digit character
 * @c: input integer of the digit
 *
 * Return: On success .
 * On error, .
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
