#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return:  0 to indicate completion
 */
int main(void)
{
int comb1;
int comb2;

for (comb1 = '0'; comb1 < '9'; comb1++)
{
for (comb2 = '0'; comb2 <= '9'; comb2++)
{
if (comb1 == '0' && comb2 < '1')
continue;
if (comb1 == '1' && comb2 < '2')
continue;
if (comb1 == '2' && comb2 < '3')
continue;
if (comb1 == '3' && comb2 < '4')
continue;
if (comb1 == '4' && comb2 < '5')
continue;
if (comb1 == '5' && comb2 < '6')
continue;
if (comb1 == '6' && comb2 < '7')
continue;
if (comb1 == '7' && comb2 < '8')
continue;
if (comb1 == '8' && comb2 < '9')
continue;
putchar(comb1);
putchar(comb2);
if (comb1 == '8' && comb2 == '9')
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
