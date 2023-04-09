#include "main.h"
#include <unistd.h>

/**
  *binary_to_unit - converts a binary to unsigned int
  *@b: Represents a string containing a binary number
  *
  *Return: 0 if b in NULL or contains non-binary digits
  *	    Else -return the converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0;
	unsigned int pwr_two = 1;
	int len_str;

	if (b == NULL)

		return (0);

	for (len_str = 0; b[len_str]; len_str++)
		;

	len_str--;

	while (len_str >= 0)
	{
		if (b[len_str] != '0' && b[len_str] != '1')
			return (0);

		converted_num += (b[len_str--] - '0') * pwr_two;
		pwr_two *= 2;
	}
	return (converted_num);
}
