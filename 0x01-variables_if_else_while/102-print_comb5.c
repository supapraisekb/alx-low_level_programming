#include <stdio.h>
/**
 * main - Program Entry
 *
 * Return: 0 to indicate success
 */
int main(void)
{
int number, number_1;

for (number = 0; number <= 98; number++)
{
for (number_1 = number + 1; number_1 <= 99; number_1++)
{
putchar((number / 10) + '0');

putchar((number % 10) + '0');
putchar(' ');
putchar((number_1 / 10) + '0');
putchar((number_1 % 10) + '0');

if (number == 98 && number_1 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
