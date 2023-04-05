#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a listint_t list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *head)
{
size_t lenCount = 0;

while (head != NULL)
{
lenCount++;
head = head->next;
}
return (lenCount);
}
