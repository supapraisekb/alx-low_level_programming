#ifndef CALC_H
#define CALC_H
#include <stdlib.h>

/**
 * struct op - Struct operation
 *
 * @op: The operator
 * @fun_calc: The function of each operation
 */
typedef struct op
{
	char *op;
	int (*fun_calc)(int num1, int num2);
} op_t;

int op_add(int num1, int num2);
int op_sub(int num1, int num2);
int op_mul(int num1, int num2);
int op_div(int num1, int num2);
int op_mod(int num1, int num2);
int (*get_op_func(char *s))(int, int);

#endif /*CALC_H*/
