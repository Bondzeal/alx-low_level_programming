#include "dog.h"

/**
 * free_dog - Function frees dogs
 * @d: Struct dog to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
