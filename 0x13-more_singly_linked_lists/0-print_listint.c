#include "lists.h"
#include <stdio.h>
/**
* print_listint - Prints all the elements of a listint_t list.
*
* @h: A pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
size_t each_node_count = 0;

if (h == NULL)
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
each_node_count++;
}
return (each_node_count);
}
