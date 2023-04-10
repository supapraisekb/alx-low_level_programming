#include "main.h"

/**
  *clear_bit - Sets the bit at a particular index to zero
  *@n: A poiner to the bit to be set
  *@index: The position of the bit to be set. 0 is the starting index
  *
  *Return: Returns 1 if successful and -1 if there is an error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = sizeof(n) * 8;
	unsigned long int bit_mask;

	if (index >= position || !n)
		return (-1);
	bit_mask = ~(1ul << index);
		*n = (*n & bit_mask);

		return (1);
}
