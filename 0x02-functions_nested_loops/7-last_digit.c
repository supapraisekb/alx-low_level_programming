#include "main.h"

/**
*print_last_digit - extract last number of a variable
* @x: variable where we extract last number
* Return: last_d if succesful
*/

int print_last_digit(int x)
{
	int last_d;

	last_d = x % 10;
	if (last_d < 0)
	{
		last_d = last_d * -1;
	}
	_putchar(last_d + '0');
	return (last_d);
}

