#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: On success pointer to duplicated string.
 * On error, NULL.
 */
char *_strdup(char *str)
{
	int i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new_str = malloc(i + 1);

	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		new_str[i] = str[i];

	new_str[i] = str[i];
	return (new_str);
}
/**
 * new_dog - ...
 *
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: dog_t*
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogy;

	new_dogy = malloc(sizeof(dog_t));
	if (new_dogy == NULL)
	{
		free(new_dogy);
		return (NULL);
	}

	new_dogy->name = _strdup(name);
	new_dogy->owner = _strdup(owner);

	if (new_dogy->name == NULL || new_dogy->owner == NULL)
		return (NULL);

	new_dogy->age = age;

	return (new_dogy);
}
