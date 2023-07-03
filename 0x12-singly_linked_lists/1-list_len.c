#include "lists.h"
#include <stdio.h>

/**
* list_len - Contains the number of elements in a linked list_t list
* @h: Pointer to the head of the list
*
* Return: The number of elements in the list
*/
size_t list_len(const list_t *h)
{
size_t element_count = 0;

for (; h != NULL; h = h->next)
{
element_count++;
}

return (element_count);
}
