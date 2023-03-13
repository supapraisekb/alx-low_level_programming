#include <stdio.h>

/**
 * main - this function  prints all arguments it receives
 * @argc: shows the size of argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; ++count)
		printf("%s\n", argv[count]);
	return (0);
}
