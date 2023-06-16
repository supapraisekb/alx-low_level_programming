#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concat two strings to n bytes
 * @str1: first string
 * @str2: second string
 * @z: number of bytes to concat of string 2
 * Return: pointer to concatenated string or NULL if it fails
 */

char *string_nconcat(char *str1, char *str2, unsigned int z)
{
	char *p;
	unsigned int i, len1, len2;

	if (!str1)
		str1 = "";
	if (!str2)
		str2 = "";

	for (len1 = 0; *(str1 + len1); len1++)
		;
	for (len2 = 0; *(str2 + len2); len2++)
		;

	if (len2 < z)
		z = len2;

	p = malloc((len1 + z + 1) * sizeof(char));

	if (!p)
		return (NULL);

	for (i = 0; i < (len1 + z); i++)
	{
		if (i < len1)
			p[i] = str1[i];
		else
			p[i] = str2[i - len1];
	}
	p[i] = '\0';

	return (p);
}
