#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free (realloc)
 * @ptr: pointer
 * @old_size: size of old pointer
 * @new_size: size of new pointer
 * Return: new void pointer or NULL if it fails
 */



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int z;

	if (!ptr)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	if (!p)
		return (NULL);

	if (new_size < old_size)
		for (; z < new_size; z++)
			((char *)p)[z] = ((char *)ptr)[z];
	else
		for (; z < old_size; z++)
			((char *)p)[z] = ((char *)ptr)[z];

	free(ptr);

	return (p);
}
