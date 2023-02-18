#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 *Return: return 0 to indicate success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
