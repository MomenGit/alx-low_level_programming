/**
 * _strlen_rec - returns the length of a string
 * @s: string to be measured
 * @i: length measured
 *
 * Return: On success length.
 * On error, .
 */
int _strlen_rec(char *s, int i)
{
	if (*(s + i) == '\0')
		return (i);
	else
		return (_strlen_rec(s, ++i));

	return (0);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s:
 *
 * Return: On success.
 * On error, .
 */
int _strlen_recursion(char *s)
{
	return (_strlen_rec(s, 0));
}
