/**
 * _strchr - a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s: string to be operated on
 * @c: character to be found its first occurrence
 *
 * Return: On success pointer to first occurrence of c or NULL if !found.
 * On error, .
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
			s++;
	}

	return (((void *)0));
}
