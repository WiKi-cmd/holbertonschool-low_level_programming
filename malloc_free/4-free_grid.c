#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* free_grid - entry point
* @grid: grid we want to empty
* @height: height of said grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
