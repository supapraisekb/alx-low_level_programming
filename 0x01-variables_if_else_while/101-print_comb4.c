#include <stdio.h>
/**
 * main - Program Entry
 *
 * Return: 0 to indicate success
 */
int main(void)
{
int number;
int number_1;
int number_2;

for (number = '0'; number <= '7'; number++)
{
for (number_1 = number + 1; number_1 <= '9'; number_1++)
{
for (number_2 = number_1 + 1; number_2 <= '9'; number_2++)
{
putchar(number);
putchar(number_1);
putchar(number_2);
if (number == '7' && number_1 == '8' && number_2 == '9')
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
