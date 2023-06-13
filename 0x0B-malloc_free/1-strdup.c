#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - copy the string given to a newly allocated space in memory
* @str: string to copy
* Return: returns a pointer to the copy, or NULL if it fails
*/
char *_strdup(char *str)
{
char *p;
unsigned int z, length;

if (!str)
return (NULL);

for (length = 0; str[length]; length++)
;

length++;
p = malloc(length * sizeof(char));

if (!p)
return (NULL);

for (z = 0; z < length; z++)
p[z] = str[z];

return (p);
}

