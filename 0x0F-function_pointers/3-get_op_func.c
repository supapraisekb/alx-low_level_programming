#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform
 * based on the users choice
 * @s: operator passed as argument
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int num1, int num2)
{
	calc_t calc_ops[] = {
		{"+", calc_ops_add},
		{"-", calc_ops_sub},
		{"*", calc_ops_mul},
		{"/", calc_ops_div},
		{"%", calc_ops_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (calc_ops[i].calc_ops)
	{
		if (strcmp(s, calc_ops[i].calc_ops) == 0)
			return (calc_ops[i].fun_calc);
		i++;
	}
	return (calc_ops[i].fun_calc);
}
