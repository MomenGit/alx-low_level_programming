#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int b10n, len, exp2, i, j;

	if (b == ((void *)0))
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);

	b10n = 0;
	for (i = 0; i < len; i++)
	{
		exp2 = 0;
		if (b[len - i - 1] == '1')
		{
			exp2 = 1;
			for (j = 0; j < i; j++)
				exp2 = exp2 * 2;
		}
		b10n += exp2;
	}
	return (b10n);
}
