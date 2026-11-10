#include "dog.h"
#include <stdlib.h>

/**
* free_dog - entry point
* @d: structure we want to empty from memory
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
