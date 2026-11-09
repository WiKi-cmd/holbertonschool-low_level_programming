#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* create_array - entry point
* @size: size of the array
* @c: initialized character
*
* Return: pointer to the array or NULL if size = 0 or if creation fails
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
