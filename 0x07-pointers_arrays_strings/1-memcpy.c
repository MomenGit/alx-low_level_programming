/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the memory area to be copied to
 * @src: memory area to be copied
 * @n: n bytes from memory area src
 *
 * Return: On success dest.
 * On error, .
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
