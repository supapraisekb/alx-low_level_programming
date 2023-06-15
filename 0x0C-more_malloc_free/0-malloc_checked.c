#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @c: size
 * Return: void pointer if succesfull, exits with a status value of 98 if fails
 */

void *malloc_checked(unsigned int c)
{
	void *p;

	p = malloc(c);

	if (p == NULL)
		exit(98);

	return (p);
}
