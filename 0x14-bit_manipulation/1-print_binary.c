#include "main.h"

/**
  *print_binary - Prints the binary form of numbers.
  *@n: numbers to be converted and printed in binary.
  */

void print_binary(unsigned long int n)
{
int check_bit, one_present = 0;
if (!n)
{
	_putchar('0');
	;
}
for (check_bit = sizeof(n) * 8 - 1; check_bit >= 0; check_bit--)
{
	if (n >> check_bit & 1)
		one_present = 1;
	if (one_present)
		n >> check_bit & 1 ? _putchar('1') : _putchar('0');
}

}

