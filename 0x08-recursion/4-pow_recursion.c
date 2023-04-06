/**
 * _pow_recursion - calculates x to the power of y
 * @:
 *
 * Return: On success the value of x raised to the power of y.
 * On error, .
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return x * _pow_recursion(x, --y);
	if (y < 0)
		return -1;

	return 1;
}
