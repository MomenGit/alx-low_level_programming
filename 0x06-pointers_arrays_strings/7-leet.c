/**
 * leet - encodes a string into 1337
 * @str:
 *
 * Return: On success .
 * On error, .
 */
char *leet(char *str)
{
	int i, j;

	char *encoders[] = {"aA4",
						"eE3",
						"oO0",
						"tT7",
						"lL1"};

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 5; j++)
			if (str[i] == encoders[j][0] || str[i] == encoders[j][1])
				str[i] = encoders[j][2];

	return (str);
}
