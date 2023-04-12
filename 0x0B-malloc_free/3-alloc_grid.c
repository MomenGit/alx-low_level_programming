#include <stdlib.h>

/**
 * alloc_grid - creates a pointer to a 2 dimensional array of integers
 * @width: int number width of grid
 * @height: int number height of grid
 *
 * Return: On success pointer to created docss.
 * On error, .
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}
