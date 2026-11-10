#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _calloc - entry point
* @nmemb: number of elements we want in the array
* @size: number of bytes for each elements
*
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
