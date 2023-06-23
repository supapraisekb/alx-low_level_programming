#include "3-calc.h"
#include <stdio.h>

/**
* main - the calculator
* @argc: size of argv
* @argv: array of arguments
* Return: Result of the calculation
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
op = argv[2];
b = atoi(argv[3]);

if (!get_op_func(op) || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
printf("%d\n", get_op_func(op)(a, b));
return (0);
}
