#include "function_pointers.h"

/**
 * print_name - this function prints a name
 * @name: taken as an argument of to be printed
 * @f: it is the pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
