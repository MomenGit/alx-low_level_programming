#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * prints program args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
