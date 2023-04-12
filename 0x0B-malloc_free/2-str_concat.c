#include <stdlib.h>

/**
 * name - description
 * @para: desc
 *
 * Return: On success .
 * On error, .
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	concat_str = malloc(i + j + 1);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat_str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}
