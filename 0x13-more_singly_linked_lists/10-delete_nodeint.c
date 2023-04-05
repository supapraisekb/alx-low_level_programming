#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - Deletes the node at a given position.
* @head: Pointer to a pointer to the head of the list.
* @index: The index of the node to be deleted.
*
* Return: 1 on success, -1 on failure.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int counter = 0;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
current = *head;
*head = current->next;
free(current);
return (1);
}
prev = *head;
current = (*head)->next;
while (current != NULL)
{
counter++;
if (counter == index)
{
prev->next = current->next;
free(current);
return (1);
}
prev = current;
current = current->next;
}
return (-1);
}
