#include "main.h"

/**
 * jack_bauer - prints the each min of the day in the 24h format
 * @para: no parameters
 *
 * Return: On success 0.
 * On error, .
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hour);
			_putchar(':');
			_putchar(min);
			_putchar('\n');
		}
	}
}
