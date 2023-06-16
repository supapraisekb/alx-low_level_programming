#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of array
 * @max: max value
 * Return: the pointer to the newly created array or NULL if it fails
 */

int *array_range(int minimum, int maximum)
{
	int *p, count;

	if (miinimum > maximum)
		return (NULL);

	p = malloc(((maximum - minimum) + 1) * sizeof(int));

	if (!p)
		return (NULL);

	for (count = 0; count <= maximum - minimum; count++)
		p[count] = (minimum + count);

	return (p);
}
