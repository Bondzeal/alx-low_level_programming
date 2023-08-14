#include "dog.h"

/**
 * print_dog - Function that prints a struct dog
 * @d: Struct dog to be printed
 *
 * Return: (nil) if d = NULL, Name: (nil) if name = NULL
 * if d = NULL print nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nilil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
