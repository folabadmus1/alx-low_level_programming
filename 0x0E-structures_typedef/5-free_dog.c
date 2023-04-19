#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Dog attributes
 *
 * @d: A dog structure
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
		if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
