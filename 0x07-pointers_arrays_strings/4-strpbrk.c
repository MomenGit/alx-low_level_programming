/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string s to be operated on
 * @accept: accepted bytes
 *
 * Return: On success a pointer to the byte in s
 * that matches one of the bytes in accept, or NULL if no such byte is found
 * On error, .
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (((void *)0));
}
