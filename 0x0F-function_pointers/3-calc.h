#ifndef CALC_H
#define CALC_H
#include <stdlib.h>

/**
 * struct calc_ops - Struct operation
 *
 * @calc_ops: The operator
 * @fun_calc: The function of each operation
 */
typedef struct calc_ops
{
	char *calc_ops;
	int (*fun_calc)(int num1, int num2);
} calc_t;

int calc_ops_add(int num1, int num2);
int calc_ops_sub(int num1, int num2);
int calc_ops_mul(int num1, int num2);
int calc_ops_div(int num1, int num2);
int calc_ops_mod(int num1, int num2);
int (*get_op_func(char *s))(int, int);

#endif /*CALC_H*/
