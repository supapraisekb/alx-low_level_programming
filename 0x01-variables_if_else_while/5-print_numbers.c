#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int base_10;

	for (base_10 = 0; base_10 < 10; base_10++)
	{
		printf("%d", base_10);
	}
	putchar('\n');
	return (0);
}
