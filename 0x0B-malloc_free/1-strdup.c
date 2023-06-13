#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy the string given to a newly allocated space in memory
 * @strn: string to copy
 * Return: returns a pointer to the copy, or NULL if it fails
 */

char *_strdup(char *strn)
{
	char *p;
	unsigned int z, length;

	if (!strn)
		return (NULL);

	for (length = 0; strn[length]; length++)
		;
	length++;
	p = malloc(len * sizeof(char));

	if (!p)
		return (NULL);

	for (z = 0; z <= length; x++)
		p[z] = strn[z];

	return (p);
}
