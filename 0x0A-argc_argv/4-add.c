#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - Entry point
 * prints program name
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, num;

	result = 0;
	while (--argc)
	{
		num = atoi(argv[argc]);
		if (!(num == 0 && argv[argc] != 0))
			result += num;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);

	return (0);
}
