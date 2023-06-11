#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from num to 98
* @num: the number to start from
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
else
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
printf("\n");
}
