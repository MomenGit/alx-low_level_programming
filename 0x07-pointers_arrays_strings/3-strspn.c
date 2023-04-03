/**
 * _strspn - gets the length of a prefix substring.
 * @s: string s to be operated on
 * @accept: accepted bytes
 *
 * Return: On success length of prefix
 * On error, .
 */
unsigned int _strspn(char *s, char *accept)
{
	char check;
	unsigned int i, counter;

	counter = 0;
	while (*s != '\0')
	{
		check = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				counter++;
				check = 1;
				break;
			}
		}

		if (!check)
			break;

		s++;
	}

	return (counter);
}
