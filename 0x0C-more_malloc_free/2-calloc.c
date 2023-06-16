#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of type
 * Return: void pointer if succesful return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int count;

	if (!nmemb || !size)
		return (NULL);

	p = malloc(nmemb * size);

	if (!p)
		return (NULL);

	for (count = 0; count < nmemb * size; count++)
		((char *) p)[count] = 0;

	return (p);
}
