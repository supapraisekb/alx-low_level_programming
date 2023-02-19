#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
*Return: return 0 to indicate success
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	if (num == '9')
	{
	continue;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
