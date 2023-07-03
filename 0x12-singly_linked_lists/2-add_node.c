#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node - Adds a new node at the beginning of a list_t list
* @head: Pointer to a pointer to the head of the list
* @str: String to be added to the new node
*
* Return: The address of the new node, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *added;

if (head == NULL || str == NULL)
{
return (NULL);
}
added = malloc(sizeof(list_t));
if (added == NULL)
{
return (NULL);
}

added->str = strdup(str);
if (added->str == NULL)
{
free(added);
return (NULL);
}
added->len = strlen(str);
added->next = *head;
*head = added;
return (added);
}
