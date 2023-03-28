#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: input string
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
		len++;

	for (i = (len % 2 == 0) ? len / 2 : (len + 1) / 2; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
