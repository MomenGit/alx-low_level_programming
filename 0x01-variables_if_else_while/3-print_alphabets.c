#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c != 'Z' + 1)
	{
		putchar(c++);
		if (c == 'z')
			c = 'A';
	}
	putchar('\n');

	return (0);
}
