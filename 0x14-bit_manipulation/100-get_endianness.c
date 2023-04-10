#include <stdio.h>
/**
* get_endianness - Checks the endianness.
*
* Return: If big-endian - 0. If little-endian - 1.
*/
int get_endianness(void)
{
int endian_Number = 0x0000001;
char *endian_Byte = (char *)&endian_Number;

if (*endian_Byte == 0)
return (0);
else
return (1);
}

