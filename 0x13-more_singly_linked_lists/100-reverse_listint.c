#include "lists.h"

/**
* reverse_listint - Reverses a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
*
* Return: A pointer to the first node of the reversed listint_t list.
**/
listint_t *reverse_listint(listint_t **head)
{
listint_t *present, *former;

present = NULL;
while (*head)
{
former = (*head)->next;
(*head)->next = present;
present = *head;
*head = former;
}
*head = present;
return (*head);
}
