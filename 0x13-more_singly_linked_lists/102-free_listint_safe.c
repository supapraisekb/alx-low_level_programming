#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - function that frees a listint_t linked list
* @begin: pointer to the beginning of the linked list
* Return: the number of nodes in the list
*/
size_t free_listint_safe(listint_t **begin)
{
int j, flag = 0;
listint_t *present, *fast, *delete;
size_t count = 0;
if (!begin)
exit(98);
for (j = 0; *begin && !flag; j++)
{
present = *begin;
fast = (*present).next;
while (present != fast)
{
if (present)
present = (*present).next;
if (fast)
fast = (*fast).next;
if (fast == *begin)
flag = 1;
if (fast)
fast = (*fast).next;
if (fast == *begin)
flag = 1;
}
delete = *begin;
*begin = (*delete).next;
free(delete);
count++;
}
while (flag && *begin != fast)
{
delete = *begin;
count++;
*begin = (*delete).next;
free(delete);
}
*begin = NULL;
return (count);
}
