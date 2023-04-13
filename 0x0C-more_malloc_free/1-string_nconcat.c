#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: string to be concatenated to s1
 * @n: number of characters of s2
 *
 * Return: On success .
 * On error, .
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, size;
	char *str;

	size = 0;
	for (i = 0; s1[i] != '\0'; i++)
		size++;
	for (j = 0; s2[j] != '\0'; j++)
		size++;

	str = malloc(size + 1);

	if (str == NULL)
		return (NULL);

	for (k = 0; *s1 != '\0'; k++)
		str[k] = *s1++;
	for (j = 0; *s2 != '\0' && j <= n; k++, j++)
		str[k] = *s2++;
	str[k] = '\0';

	return (str);
}
