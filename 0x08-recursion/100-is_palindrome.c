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
 * is_palindrome_logic - returns whether a string is palindrome or not
 * @s: string to be checked
 * @len: length of string s
 * @i: index of the checked char of s
 *
 * Return: On success 1.
 * On error, .
 */
int is_palindrome_logic(char *s, int len, int i)
{
	if (i == len / 2)
		return (1);

	if (*(s + i) == *(s + len - i - 1))
		return (is_palindrome_logic(s, len, ++i));

	return (0);
}
/**
 * is_palindrome - returns whether a string is palindrome or not
 * @s: string to be checked
 *
 * Return: On success 1.
 * On error, .
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_rec(s, 0);

	return (is_palindrome_logic(s, length, 0));
}
