#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by alloc_grid function
 * @grid: grid required to be freed
 * @height: the height of the grid
 *
 * Return: On success .
 * On error, .
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
