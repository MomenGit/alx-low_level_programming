/**
 * name - description
 * @para: desc
 *
 * Return: On success .
 * On error, .
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
		len++;

	return len;
}
