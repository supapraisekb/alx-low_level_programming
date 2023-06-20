#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - write a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dodge;
	char *cop_name, *cop_owner;
	int len1, len2, i;

	dodge = malloc(sizeof(dog_t));
	if (!dodge)
		return (NULL);
	for (len1 = 0; name[len1]; len1++)
		;
	for (len2 = 0; owner[len2]; len2++)
		;
	len1++;
	len2++;
	cop_name = malloc(len1);
	if (!cop_name)
	{
		free(dodge);
		return (NULL);
	}
	cop_owner = malloc(len2);
	if (!cop_owner)
	{
		free(cop_name);
		free(dodge);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		cop_name[i] = name[i];
	for (i = 0; i < len2; i++)
		cop_owner[i] = owner[i];

	dodge->name = cop_name;
	dodge->owner = cop_owner;
	dodge->age = age;

	return (dodge);
}
