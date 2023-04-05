#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Return: On success, the address of the new element. On failure, NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;

if (!head)
return (NULL);
newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);
newNode->n = n;
newNode->next = NULL;
if (!*head)
{
*head = newNode;
}
else
{
listint_t *last = *head;
while (last->next != NULL)
last = last->next;
last->next = newNode;
}
return (newNode);
}
