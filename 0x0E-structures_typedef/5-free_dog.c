#include <stdlib.h>
#include "dog.h"

/**
 * free-dog - frees dogs.
 * @d: freeing dog.
 * Return: nothing.
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
