#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning of a list.
 *
 * @head: the first node
 * @n: The integer to be stored in the new node.
 *
 * Return: If successful, return the address of the new element.
 * On failure, return NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

if (head == NULL)
{
printf("empty list");
return (NULL);
}
newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}
