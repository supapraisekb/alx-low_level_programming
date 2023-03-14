#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid, row, col;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int *)*height);

	if (!grid)
	{
		free(grid);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int)*width);

		if (!grid[row])
		{
			while (row)
			{
				free(grid[row]);
				row--;
			}
			free(grid);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}

	return (grid);
}
