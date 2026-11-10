#include "dog.h"
#include <stdlib.h>

/**
* _strcpy - entry point
* @src: string we want to copy
*
* Return: pointer to dest
*/
static char *_strcpy(char *src)
{
	int i;
	int c = 0;
	char *d;

	if (src == NULL)
	{
		return (NULL);
	}
	while (src[c] != '\0')
	{
		c++;
	}
	d = malloc((c + 1) * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= c; i++)
	{
		d[i] = src[i];
	}
	return (d);
}

/**
* new_dog - entry point
* @name: new dog name
* @age: new dog age
* @owner: new dog owner
*
* Return: pointer to the new dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner  == NULL)
	{
		return (NULL);
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = _strcpy(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = _strcpy(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
