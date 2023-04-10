#include "main.h"

/**
* flip_bits - computes the number of bits to be flipped
* @n: the number of the current position
* @m: the number of the bit where n will be flipped to
*
* Return: the number of flips required to move from n to m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int bit_size = sizeof(unsigned long int) * 8;
unsigned long int bit_XOR = n ^ m;
unsigned int bitFlips = 0;
unsigned int j;

for (j = 0; j < bit_size; j++)
{
if ((bit_XOR >> j) & 1)
{
bitFlips++;
}
}
return (bitFlips);
}

