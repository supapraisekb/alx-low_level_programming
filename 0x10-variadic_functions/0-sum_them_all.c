#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * Return: 0 if n = 0 or sum of parameters if succesful
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	unsigned int i, sum = 0;

	if (!n)
		return (0);

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
