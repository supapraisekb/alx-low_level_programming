#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase characters
* @c: the character to be checked
*  Return: 1 if C is Uppercase
*           0 if it is lower
*/

int _isupper(int c)
{
int i;

for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)

return (1);
}
return (0);
}
