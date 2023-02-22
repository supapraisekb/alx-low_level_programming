#include "main.h"

/**
*print_last_digit - extract last number of a variable
* @last_d: variable where we extract last number
* Return: last_d if succesful
*/

int print_last_digit(int last_d)
{
	last_d %= 10;
	if (last_d < 0)
		last_d *= -1;
	last_d += 48;
	_putchar(last_d);
	return (last_d - '0');
}

