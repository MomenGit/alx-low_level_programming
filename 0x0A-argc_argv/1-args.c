#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * prints number of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
