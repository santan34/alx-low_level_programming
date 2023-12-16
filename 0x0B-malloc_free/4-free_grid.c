#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - frees the grid allocated before
 * @grid: the pointer to the grid
 * @height: the rows of memory
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
