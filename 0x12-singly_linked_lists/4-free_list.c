#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t
 * @head: linked list , list_t
 */

void free_list(list_t *head)
{
	list_t *temp_store;

	while (head)
	{
		temp_store = head;
		head = head->next;
		free(temp_store->str);
		free(temp_store);
	}
}
