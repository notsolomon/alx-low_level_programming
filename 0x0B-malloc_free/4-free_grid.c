#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - points to a 2 dimensional grid
 * @grid: param
 * @height: param
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}

}
