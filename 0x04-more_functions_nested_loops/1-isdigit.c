#include "main.h"

/**
* _isdigit - checks for digits 0 - 9
* @c: the digits to be checked
* Return: 1 if c is a digit else 0
*/
int _isdigit(int c)
{
int i;

for (i = '0'; i <= '9'; i++)
{
if (c == i)

return (1);
}
return (0);
}
