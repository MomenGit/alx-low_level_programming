/**
 * factorial - calculates the factorial of a given number
 * @n: number required to get its factorial
 *
 * Return: On success factorial of n.
 * On error, .
 */
int factorial(int n)
{
	if (n == 0)
		return 1;
	else if (n < 0)
		return -1;

	return n * factorial(n - 1);
}
