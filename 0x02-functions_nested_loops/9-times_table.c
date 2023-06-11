#include "main.h"
/**
* times_table - prints the 9 times table
*
*/

void times_table(void)
{
int row, column, product, temp_storage;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;
if ((product == 0) && (column == 0))
{
_putchar(product + '0');
}
else if (product > 9)
{
temp_storage = product % 10; /*holds the value of the back character*/
product /= 10; /* to get the front character */
_putchar(',');
_putchar(' ');
_putchar(product + '0');
_putchar(temp_storage + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
}
_putchar('\n');
}
}
