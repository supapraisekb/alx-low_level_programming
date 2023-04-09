#include "main.h"

/**
  *set_bit - It sets the value of a bit to 0 at a given index
  *@n: Points to a bit within the function
  *@index: the index of the bit to set beginning at 0
  *
  *Return: returns 1 if successful, -1 on error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int position = sizeof(n) * 8;

if (index >= position || !n)
		return (-1);

*n |= (1ul << index);
return (1);
}
