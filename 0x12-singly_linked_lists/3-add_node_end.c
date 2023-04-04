#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
* _strlen - Returns the length of a string.
*
* @str: The string to be measured.
*
* Return: The length of the string.
*/
int _strlen(const char *str)
{

int len = 0;
while (str[len] != '\0')
{
len++;
}
return (len);
}


/**
* add_node_end - Adds a new node at the end of a list
* @head: Pointer to a pointer to the head of the list
* @str: String to be added to the new node
*
* Return: The address of the new node or new list_t, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current;

if (head == NULL || str == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}
return (new_node);
}
