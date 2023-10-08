#include "main.h"
/**
 * free_grid - function that frees a
 * 2 dimensional grid
 *
 * @grid: memories grids
 * @height: 1st variable int
 *
 * Return: void success
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
