#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - Inserts a new node at a given position
* @head: A pointer to a pointer to the head of the list
* @idx: The index of the list where the new node should be added
* @n: The integer to store in the new node
*
* Return: The address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head,
unsigned int idx, int n)
{
listint_t *newNode, *tmp;
unsigned int counter = 0;

if (!head)
return (NULL);
newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);
newNode->n = n;
if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}
tmp = *head;
while (tmp)
{
if (counter == idx - 1)
{
newNode->next = tmp->next;
tmp->next = newNode;
return (newNode);
}
counter++;
tmp = tmp->next;
}
free(newNode);
return (NULL);
}
