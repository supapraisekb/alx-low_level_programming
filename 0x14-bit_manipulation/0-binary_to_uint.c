#include "main.h"

/**
  *binary_to_uint - converts a binary to unsigned int
  *@b: Represents a string containing a binary number
  *
  *Return: 0 if b in NULL or contains non-binary digits
  *	    Else -return the converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0;
	unsigned int pwr_2 = 1;
	int len_str;

	if (!b)
		return (0);

	for (len_str = 0; b[len_str]; len_str++)
		;

	len_str--;

	while (len_str >= 0)
	{
		if (b[len_str] != '0' && b[len_str] != '1')
			return (0);

		converted_num += (b[len_str--] - '0') * pwr_2;
		pwr_2 *= 2;
	}
	return (converted_num);
}
