#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @num: number of parameters
 * Return: 0 if num = 0 or sum of parameters if succesful
 */

int sum_them_all(const unsigned int num, ...)
{
	va_list num_list;

	unsigned int i, sum = 0;

	if (!num)
		return (0);

	va_start(num_list, num);

	for (i = 0; i < num; i++)
		sum += va_arg(num_list, int);

	va_end(num_list);

	return (sum);
}
