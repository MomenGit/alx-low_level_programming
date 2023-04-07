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
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number to be found its square root
 *
 * Return: On success square root of n.
 * On error, .
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqr(n, 0));
}
