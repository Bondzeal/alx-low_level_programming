#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by the alloc_grid function
 * @grid: address of 2 dimensional grid
 * @height: height of grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
