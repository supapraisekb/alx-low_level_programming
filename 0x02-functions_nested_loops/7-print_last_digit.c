#include "main.h"

/**
 * print_last_digit - extract last number of a variable
 * @num: variable where we extract last number
 * Return: last_digit if succesful
 */

int print_last_digit(int num)
{
int last_digit;
if (num < 0)
{
num *= -1;
}
last_digit = num % 10;
_putchar (last_digit + '0');
return (last_digit);
}
