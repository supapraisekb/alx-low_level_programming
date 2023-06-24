#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of parameters
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
unsigned int k;

va_start(numbers, n);

for (k = 0; k < n; k++)
{
printf("%d", va_arg(numbers, int));

if (separator && k != (n - 1))
{
printf("%s", separator);
}
}
va_end(numbers);
printf("\n");
}
