#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: On success sum of a and b.
 * On error, .
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: On success the difference of a and b.
 * On error, .
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: On success the product of a and b.
 * On error, .
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: On success the result of the division of a by b.
 * On error, .
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulus two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: On success the remainder of the division of a by b.
 * On error, .
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
