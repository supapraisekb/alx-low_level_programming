#include "3-calc.h"
#include <stdio.h>

/**
 * calc_ops_add - sum of num1, num2
 * @num1: first number to add
 * @num2: second number to add
 * Return: sum if succesful
 */

int calc_ops_add(int num1, int num2)
{
	return ((num1) + (num2));
}
/**
 * calc_ops_sub - difference btw num1 and num2
 * @num1: 1st number to subtact
 * @num2: 2nd number to subtract
 * Return: difference between the numbers
 */
int calc_ops_sub(int num1, int num2)
{
	return ((num1) - (num2));
}
/**
 * calc_ops_mul - function to multiply a and b
 * @num1: 1st number to multiply
 * @num2: 2nd number to multiply
 * Return: product of the the two numbers
 */
int calc_ops_mul(int num1, int num2)
{
	return ((num1) * (num2));
}
/**
 * calc_ops_div - divides num1 and num2
 * @num1: dividend
 * @num2: divisor
 * Return: quotient if successful
 */
int calc_ops_div(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Enter a non-zero number\n");
		exit(100);
	}
	return ((num1) / (num2));
}
/**
 * calc_ops_mod - Modulus of num1 and num2
 * @num1: dividend
 * @num2: divisor
 * Return: the remainder of the division
 */
int calc_ops_mod(int num1, int num2)
{
	if (num2 > 0)
		return ((num1) % (num2));

	printf("Enter a non-zero number\n");
	exit(100);
}
