#include "lists.h"
#include <stdlib.h>

/**
* free_listint - Frees a listint_t list.
*
* @head: A pointer to the head of the list.
*/
void free_listint(listint_t *head)
{
listint_t *current, *next;

if (!head)
return;
current = head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}

