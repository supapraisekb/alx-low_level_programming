#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints strings, followed by a new line
* @separator: string to be printed between the strings
* @n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list_of_args;
unsigned int index;
char *output_str;

va_start(list_of_args, n);

for (index = 0; index < n; index++)
{
output_str = va_arg(list_of_args, char *);
if (output_str != NULL)
printf("%s", output_str);
else
printf("nil");

if ((separator != NULL) && (index < n - 1))
printf("%s", separator);
}

printf("\n");

va_end(args);
}
