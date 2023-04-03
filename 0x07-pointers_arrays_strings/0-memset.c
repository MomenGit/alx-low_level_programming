/**
 * _memset - function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: a memory area
 * @b: the constant byte to fill the memory area
 * @n: the first n bytes of the memory area pointed to by s
 *
 * Return: On success s.
 * On error, .
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	s[i] = '\0';

	return (s);
}
