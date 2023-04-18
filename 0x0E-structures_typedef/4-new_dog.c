#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - ...
 *
 * @name: ...
 * @age: ...
 * @owner: ...
 * Return dog_t*
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;
	char *name_c, *owner_c;

	name_c = _strdup(name);
	owner_c = _strdup(owner);

	if (name_c == NULL || owner_c == NULL)
		return (NULL);
	dogy->name = name_c;
	dogy->age = age;
	dogy = owner_c;

	return (dogy);
}

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
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		new_str[i] = str[i];

	new_str[i] = str[i];
	return (new_str);
}
