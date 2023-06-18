#include "main.h"

/**
 * swap_int - swap to value pointers
 * @x: first variable to swap
 * @y: second variable to swap
 */

void swap_int(int *x, int *y)
{
int hold_x;

hold_x = *x;
*x = *y;
*y = hold_x;
}
