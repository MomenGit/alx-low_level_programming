#include "3-calc.h"

/**
 * main - check the code
 *
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0.
 * On Error: 98 if argc not equal to 4,
 * 99 if operator is not supported,
 * 100 if division or modulus by 0.
 */
int main(int argc, char **argv)
{
	int result, (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}