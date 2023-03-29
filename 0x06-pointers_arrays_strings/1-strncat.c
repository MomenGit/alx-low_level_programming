/**
 * _strncat - concatenates two strings while using at most n bytes from src
 * @dest: the string to get appended
 * @src: the string to be appended to dest
 *
 * Return: On success dest.
 * On error, .
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *str;

	str = dest;

	while (*str != '\0')
		str++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*str++ = src[i];

	*str = '\0';
	return (dest);
}
