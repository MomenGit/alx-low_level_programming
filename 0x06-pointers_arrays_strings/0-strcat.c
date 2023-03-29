/**
 * strcat - concatenates two strings
 * @dest: the string to get appended
 * @src: the string to be appended to dest
 *
 * Return: On success the concatenated string.
 * On error, .
 */
char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*str != '\0')
		str++;

	while (*src != '\0')
		*str++ = *src++;

	*str = '\0';
	return (dest);
}
