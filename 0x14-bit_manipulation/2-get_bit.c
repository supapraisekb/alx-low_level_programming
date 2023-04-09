#include "main.h"

/**
  *get_bit - This function returns a bit's value at a given index
  *@index: bit index which begins at 0
  *@n: the bit
  *Return: the value of a given bit at index
  * If an error occurs, it returns -1
  */

int get_bit(unsigned long int n, unsigned int index)
{
int position = sizeof(unsigned long int) * 8 - 1;

if (index >> position)
return (-1);
return ((n >> index) & 1);
}

