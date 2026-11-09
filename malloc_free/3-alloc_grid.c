#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* alloc_grid - entry point
* @width: width of the array we want to create
* @height: height of the array we want to create
*
* Return: pointer to the array or NULL if failure, width or height <= 0
*/
int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
