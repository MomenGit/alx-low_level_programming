/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @src: the string to be copied
 * @dest: the string to hold the copy
 *
 * Return: On success dest.
 * On error, .
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
