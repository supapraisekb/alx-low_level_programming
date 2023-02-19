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
	int num_hex;

	for (num = 0; num < 10; num++)
	{
	putchar(num + '0');
	}
	for (num_hex = 'a'; num_hex <= 'f'; num_hex++)
	{
	putchar(num_hex);
	}
	putchar('\n');
	return (0);
}
