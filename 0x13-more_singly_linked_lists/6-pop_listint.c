#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - Deletes the head node of a listint_t linked list
 *              and returns the head node’s data (n).
 *
 * @head: A pointer to a pointer to the head of the list.
 *
  * Return: The data (n) stored in the head node of the list,
  *or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
int data_item;
listint_t *tmp;

if (!head || !*head)
return (0);
tmp = *head;
data_item = tmp->n;
*head = tmp->next;
free(tmp);
return (data_item);
}
