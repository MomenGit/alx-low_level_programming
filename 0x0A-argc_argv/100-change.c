#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int coins, dividend, cents, i;
	int coin_types[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coins = 0;
	dividend = 0;

	for (i = 0; i < 5 && cents; i++)
	{
		dividend = cents / coin_types[i];
		cents -= dividend * coin_types[i];
		coins += dividend;
	}

	printf("%d\n", coins);

	return (0);
}
