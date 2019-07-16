#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free a matrix
 * @grid: it is the matrix
 * @height: height of the matrix
 * Return: nothing
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
