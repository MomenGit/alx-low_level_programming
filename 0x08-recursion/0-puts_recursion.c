#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: string to be put
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
