#include <stdlib.h>
#include <stdio.h>

/**
* array_range - creates an array of integers
* @min: minimum value of array
* @max: maximum value
* Return: the pointer to the newly created array or NULL if it fails
*/
int *array_range(int min, int max)
{
int *p, count;

if (min > max)
return (NULL);

p = malloc(((max - min) + 1) * sizeof(int));

if (p == NULL)
return (NULL);

for (count = 0; count <= (max - min); count++)
p[count] = min + count;

return (p);
}

