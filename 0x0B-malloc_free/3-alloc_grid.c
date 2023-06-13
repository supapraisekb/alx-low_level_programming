#include "main.h"

#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)

{
int **grid;
int u, v;

if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (u = 0; u < height; u++)
{
grid[u] = malloc(sizeof(int) * width);
if (grid[u] == NULL)
{
for (; u >= 0; u--)
free(grid[u]);
free(grid);
return (NULL);
}
}
for (u = 0; u < height; u++)
{
for ( = 0; v < width; v++)
grid[u][v] = 0;
}
return (grid);
}
