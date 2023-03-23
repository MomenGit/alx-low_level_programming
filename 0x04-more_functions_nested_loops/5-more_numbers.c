#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
			_putchar('1');
		_putchar('0' + i % 10);
	}
	_putchar('\n');
}
