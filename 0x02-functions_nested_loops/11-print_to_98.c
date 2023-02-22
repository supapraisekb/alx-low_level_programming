#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - count to 98
 * @z: variable to determine if input is greater than, less than or is 98
 *
 */

void print_to_98(int z)
{
if (z > 98)
{
for (; z >= 98; z--)
{
printf("%d", z);
if (z != 98)
printf(", ");
else
printf("\n");
}
}
else if (z < 98)
{
for (; z <= 98; z++)
{
printf("%d", z);
if (z != 98)
printf(", ");
else
printf("\n");
}
}
else
{
printf("%d\n", z);
}
}
