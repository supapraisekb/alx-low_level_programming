#include "main.h"

/**
 * _islower - checks if input is lowercase
* @c: this character will be checked
*
* main - uses built in function
* Return: 1 if c is lowercase 0 if otherwise
*/

int _islower(int c)
{
int slo;
slo = 0;
if (c >= 'a' && c <= 'z')
{
slo = 1;
}
return (slo);
}
