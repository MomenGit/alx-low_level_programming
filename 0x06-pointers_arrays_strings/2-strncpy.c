/**
 * _strncpy - copies n chars of string src to string dest
 * @dest: the destination of the copied string
 * @src: the copied string
 *
 * Return: On success dest.
 * On error, .
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
