/**
 * _strstr - locates a substring
 * @haystack: string to be searched for the substring needle
 * @needle: substring to be found in the string haystack
 *
 * Description:
 * finds the first occurrence of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *
 * Return: On success a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 * On error, .
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (!(needle[i] == haystack[j + i] && haystack[j + i] != '\0'))
				break;
		}

		if (needle[i] == '\0')
			return (haystack + j);
	}

	return (((void *)0));
}
