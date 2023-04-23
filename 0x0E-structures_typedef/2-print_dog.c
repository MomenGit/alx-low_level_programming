#include "dog.h"

/**
 * print_dog - ...
 *
 * @d: ...
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = nil;
	if (d->owner == NULL)
		d->owner = nil;

	if (d->age)
		printf("Name: %s\nAge: %f\nOwner:%s\n", d->name, d->age, d->owner);
	else
		printf("Name: %s\nAge: %s\nOwner:%s\n", d->name, nil, d->owner);
}
