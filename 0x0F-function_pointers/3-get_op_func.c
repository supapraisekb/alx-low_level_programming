#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform
 * based on the users choice
 * @s: operator passed as argument
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k = 0;

	while (ops[k].op && strcmp(s, ops[k].op) != 0)

		k++;

	return (ops[k].fun_calc);
}
