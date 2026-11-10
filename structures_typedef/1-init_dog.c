#include "dog.h"
#include <stddef.h>

/**
* init_dog - entry point
* @d: name of the structure
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
