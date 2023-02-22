#include "main.h"

/**
 * print_last_digit - extract last number of a variable
 * @l_d: variable where we extract last number
 * Return: i if succesful
 */

int print_last_digit(int l_d)
{
l_d %= 10;
if (l_d < 0)
l_d *= -1;
_putchar(l_d + '0');
return (l_d - '0');
}
