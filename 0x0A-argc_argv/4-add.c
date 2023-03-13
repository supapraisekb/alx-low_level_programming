#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * chartoint - function that checks array of characters for integers
 * @c: array of characters
 * Return: 0 if successful, -1 if fails
 */
int chartoint(char *c)
{
	int number;
	char *ptr;

	number = strtol(c, &ptr, 10);
	if (ptr[0])
		return (-1);
	return (number);
}

/**
 * main - function that multiplies two numbers
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int count, numSum, check;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1, numSum = 0; count < argc; count++)
	{
		check = chartoint(argv[count]);
		if (check > -1)
		{
			if (INT_MAX - numSum > check)
				numSum += check;
			else
				check = -1;
		}
		if (check < 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", numSum);
	return (0);
}

