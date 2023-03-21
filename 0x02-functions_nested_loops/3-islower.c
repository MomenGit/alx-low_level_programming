#include "main.h"

/**
 * _islower - returns 1 if the input is a lower case
 * otherwise returns 0
 * @c: input character
 *
 * Return: On success 1.
 * On error, 0.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
