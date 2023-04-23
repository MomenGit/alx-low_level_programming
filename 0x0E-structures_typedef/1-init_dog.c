#include "dog.h"

/**
 * init_dog - initialize dog struct instance
 * @d: ...
 * @name: ...
 * @age: ...
 * @owner: ...
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
