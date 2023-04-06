#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: start of linked list
 * Return: sum of all the data (n) values
 */
int sum_listint (listint_t *head)
{
	int nSUM = 0;

	for (nSUM = 0; head; head = head->next)
		nSUM =nSUM + head->n;

	return (nSUM);
}
