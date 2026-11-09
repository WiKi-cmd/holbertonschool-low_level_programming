#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - entry point
* @b: number of bytes needed
* Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		free(malloc(b));
		exit(98);
	}
	return (malloc(b));
}
