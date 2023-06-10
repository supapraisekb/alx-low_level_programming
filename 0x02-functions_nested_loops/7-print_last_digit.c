#include "main.h"

/**
 * print_last_digit - extract last number of a variable
 * @num: variable where we extract last number
 * Return: last_digit if succesful
 */

int print_last_digit(int num)
{
num %= 10;
if (num < 0)
{
num = -num;
}
_putchar (num + '0');
return (num);
}
