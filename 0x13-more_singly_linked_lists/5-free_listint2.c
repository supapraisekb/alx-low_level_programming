#include "lists.h"
#include <stdlib.h>
/**
   * free_listint2 - Frees a listint_t list and sets the head to NULL.
    * @head: A pointer to a pointer to the head node of the list.
     */
void free_listint2(listint_t **head)
{
listint_t *fwd_node, *tmp;

if (!head)
return;
fwd_node = *head;
while (fwd_node != NULL)
{
tmp = fwd_node;
fwd_node = fwd_node->next;
free(tmp);
}
*head = NULL;
}
