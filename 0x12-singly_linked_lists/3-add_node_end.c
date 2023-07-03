#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - Adds a new node at the end of a list
* @head: Pointer to a pointer to the head of the list
* @str: String to be added to the new node
*
* Return: The address of the new node or new list_t, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *add_end, *current;

if (!head || str == NULL)
{
return (NULL);
}
add_end = malloc(sizeof(list_t));
if (add_end == NULL)
{
return (NULL);
}
add_end->str = strdup(str);
if (add_end->str == NULL)
{
free(add_end);
return (NULL);
}
add_end->len = strlen(str);
add_end->next = NULL;
if (*head == NULL)
{
*head = add_end;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = add_end;
}
return (add_end);
}

