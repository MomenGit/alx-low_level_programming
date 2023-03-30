/**
 * cap_string - capitalizes all words of a string.
 * @str: string to operated on
 *
 * Return: On success str.
 * On error, .
 */
char *cap_string(char *str)
{
	int i, j;

	char *separators = " ,.\n\t;!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(str[i] >= 'A' && str[i] <= 'z') && str[i] != '?')
		{
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (str[i] == separators[j])
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i + 1] = (char)(str[i + 1] - 32);
					break;
				}
			}
		}
	}

	return (str);
}
