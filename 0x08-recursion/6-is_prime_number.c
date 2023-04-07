/**
 * sqr - calculates natural square root of a number
 * @n: number to be found its square root
 * @root: the probable root of the number n
 *
 * Return: On success square root of n.
 * On error, .
 */
int sqr(int n, int root)
{
	if (root * root > n)
		return (-1);
	else if (root * root < n)
		root = sqr(n, ++root);

	return (root);
}
/**
 * primality - checks if a number is prime
 * @n: number to be checked
 * @div: divisor to be tested against
 * @sqrtn: square root of n
 *
 * Return: On success 1 otherwise 0.
 */
int primality(int n, int div, int sqrtn)
{
	if (!(n % div))
		return (0);
	else if (div >= sqrtn)
		return (1);
	else
		return (primality(n, ++div, sqrtn));

	return (0);
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: On success 1 otherwise 0.
 * On error, .
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (primality(n, 2, sqr(n, 0)));
}
