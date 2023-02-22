#include "main.h"

/**
 * print_last_digit - extract last number of a variable
 * @x: variable where we extract last number
 * Return: l_d if succesful
 */

int print_last_digit(int x)

{
int l_d;

l_d = x % 10;
if (l_d < 0)
{
l_d = l_d * -1;
}
_putchar(l_d + '0');
return (l_d);
}
