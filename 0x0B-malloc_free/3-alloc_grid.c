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
int **grid_funct;
int u, v;

if (width <= 0 || height <= 0)
return (NULL);
grid_funct = malloc(sizeof(int *) * height);
if (grid_funct == NULL)
return (NULL);
for (u = 0; u < height; u++)
{
grid_funct[u] = malloc(sizeof(int) * width);
if (grid_funct[u] == NULL)
{
for (; u >= 0; u--)
free(grid_funct[u]);
free(grid_funct);
return (NULL);
}
}
for (u = 0; u < height; u++)
{
for ( v = 0; v < width; v++)
grid_funct[u][v] = 0;
}
return (grid_funct);
}
