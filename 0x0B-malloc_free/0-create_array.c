#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an arry of chars, and initializes it with a char
 * @size: size of array
 * @c: specific char
 * Return: returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int z;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(size * sizeof(char));

	if (p == 0)
		return (NULL);

	for (z = 0; z < size; z++)
		p[z] = c;

	return (p);
}
