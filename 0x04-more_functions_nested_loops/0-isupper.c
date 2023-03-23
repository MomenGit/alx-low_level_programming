#include "main.h"

/**
 * _isupper - checks whether the given character is an uppercase or not
 * @c: input integer that resembles the character
 *
 * Return: On success 1.
 * On error, .
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
