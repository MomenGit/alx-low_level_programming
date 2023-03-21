#include "main.h"

/**
 * _isalpha - returns 1 if input is an alphabetic letter
 * @c: input character
 *
 * Return: On success 1.
 * On error, 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
