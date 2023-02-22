#include "main.h"

/**
*print_last_digit - extract last number of a variable
* @x: variable where we extract last number
* Return: last_d if succesful
*/

int print_last_digit(int x)
{
	int last_d = x % 10;
	if (x < 0)
		x *= -1;
	_putchar('0' + last_d);
	return (last_d);
}

