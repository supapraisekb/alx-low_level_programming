#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - Frees a listint_t linked list
* @h: Pointer to the beginning of the linked list
* Return: The number of nodes in the list
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *temp;
if (!h)
return (0);
while (*h)
{
current = *h;
*h = (*h)->next;
current->next = NULL;
count++;
if (current <= current->next)
{
free(current);
}
else
{
temp = current->next;
current->next = NULL;
free(current);
while (temp && temp <= temp->next)
{
count++;
current = temp;
temp = temp->next;
current->next = NULL;
free(current);
}
if (temp)
{
count++;
free(temp);
}
}
}
return (count);
}
