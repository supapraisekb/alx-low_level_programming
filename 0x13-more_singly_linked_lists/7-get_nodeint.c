#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the start of linked list
 * @index: index
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; head != NULL; j++, head = (head->next)
		if (j == index)
			return (head);
	return (NULL);
}
