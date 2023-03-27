/**
 * _strlen - returns the length of a string
 * @s: required string
 *
 * Return: On success string length.
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
		len++;

	return len;
}
