#include "main.h"
#include <stdlib.h>


/**
* argstostr - Concatenates all arguments of the program into a string;
*             arguments are separated by a new line in the string.
* @ac: The number of arguments passed to the program.
* @av: An array of pointers to the arguments.
*
* Return: If ac == 0, av == NULL, or the function fails - NULL.
*         Otherwise - a pointer to the new string.
*/

char *argstostr(int ac, char **av)
{

	char *strn;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (arg = 0; arg < ac; arg++)

	{
	for (byte = 0; av[arg][byte]; byte++)
	size++;
	}
	strn = malloc(sizeof(char) * size + 1);
	if (stn == NULL)
	return (NULL);
	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
	for (byte = 0; av[arg][byte]; byte++)
	strn[index++] = av[arg][byte];
	strn[index++] = '\n';
	}
	strn[size] = '\0';

	return (strn);
}
