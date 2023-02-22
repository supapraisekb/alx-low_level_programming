#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 if succesful
 */

int main(void)
{
	int sum, multiples;

	for (multiples = 1023, sum = 0; multiples; multiples--)
		if (!(multiples % 3) || !(multiples % 5))
		{
			sum = sum + multiples;
		}
	printf("%d\n", sum);
	return (0);
}
