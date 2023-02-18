#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num_char;

	for (num_char = 0; num_char < 10; num_char++)
	{
		putchar(num_char + '0');
	}
	putchar('\n');
	return (0);
}
