#include <stdio.h>

/**
 * main - function that prints its name followed by a new line
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("My name is:  %s\n", argv[0]);
	return (0);
}

