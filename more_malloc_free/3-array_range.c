#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* array_range  - entry point
* @min: minimum value contained in the array
* @max: maximum value contained in the array
*
* Return: pointer to created arrat or NULL if min > max or malloc fails
*/
int *array_range(int min, int max)
{
	int i;
	int nemb;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	nemb = max - min + 1;
	a = malloc(nemb * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nemb; i++)
	{
		a[i] = min + i;
	}
	return (a);
}
