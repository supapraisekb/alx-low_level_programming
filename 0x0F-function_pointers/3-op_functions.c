#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sum of num1, num2
 * @num1: first number to add
 * @num2: second number to add
 * Return: sum if succesful
 */

int op_add(int num1, int num2)
{
	return ((num1) + (num2));
}
/**
 * op_sub - difference btw num1 and num2
 * @num1: 1st number to subtact
 * @num2: 2nd number to subtract
 * Return: difference between the numbers
 */
int op_sub(int num1, int num2)
{
	return ((num1) - (num2));
}
/**
 * op_mul - function to multiply a and b
 * @num1: 1st number to multiply
 * @num2: 2nd number to multiply
 * Return: product of the the two numbers
 */
int op_mul(int num1, int num2)
{
	return ((num1) * (num2));
}
/**
 * op_div - divides num1 and num2
 * @num1: dividend
 * @num2: divisor
 * Return: quotient if successful
 */
int op_div(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Enter a non-zero number\n");
		exit(100);
	}
	return ((num1) / (num2));
}
/**
 * op_mod - Modulus of num1 and num2
 * @num1: dividend
 * @num2: divisor
 * Return: the remainder of the division
 */
int op_mod(int num1, int num2)
{
	if (num2 > 0)
		return ((num1) % (num2));

	printf("Enter a non-zero number\n");
	exit(100);
}
