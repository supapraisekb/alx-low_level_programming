#include "main.h"

/**
 * print_sign - check input if its positive, negative or zero
 * @n: variable to determine if input is greater than, less than or is zero
 *
 * Return: 0 if succesful
 */

int print_sign(int n)
{
int sign;
if (n > 0)
{
_putchar('+');
sign = 1;
}
else if (n < 0)
{
_putchar('-');
sign = -1;
}
else
{
_putchar('0');
sign = 0;
}
return (sign);
}
