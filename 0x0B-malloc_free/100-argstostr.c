#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: string arguments
 *
 * Return: On success pointer to concatenated string.
 * On error, NULL.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int size, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			size++;

	str = malloc(size + ac + 1);
	str[size + ac] = '\0';

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		str[k++] = '\n';
	}

	return (str);
}
