#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concat two string to a newly allocated space in memory
 * @s1: string 1
 * @s2: string 2
 * Return: returns a pointer to the two strings concatenated, or NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int z, len_1 = 0, len_2 = 0;

	if (!s1)
		s1 = "";
	else
		for (; s1[len_1]; len_1++)
			;
	if (!s2)
		s2 = "";
	else
		for (; s2[len_2]; len_2++)
			;
	len_2++;
	ptr = malloc((len_1 + len_2) * sizeof(char));

	if (!p)
		return (NULL);

	for (z = 0; z <= (len_1 + len_2); z++)
	{
		if (z < len_1)
			p[z] = s1[z];
		else
			ptr[x] = s2[z - len_1];
	}

	return (p);
}
