#include "main.h"

/**
 * _abs - determine the absolute value of an integer
 * @x: variable to determine the absolute value of an integer
 * Return: i if succesful
 */

int _abs(int x)
{
if (x < 0)
x *= -1;
return (x);
}
