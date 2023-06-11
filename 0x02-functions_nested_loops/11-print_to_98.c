#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all natural numbers from 1-98
* @num: the numbers to be printed
*
* Return: the printed numbers
*/
void print_to_98(int num)
{
int count;

if (num <= 98)
{
for (count = num; count <= 98; count++)
{
printf("%d", count);
if (count != 98)
{
printf(", ");
}
}
}
else if (num >= 98)
{
for (count = num; count >= 98; count--)
{
printf("%d", count);
if (count != 98)
{
printf(", ");
}
}
}
else
{
printf("\n");
}
}
