#include "function_pointers.h"

/**
 * print_name - this function prints a name
 * @name: taken as an argument of to be printed
 * @fun_ptr: it is the pointer to a function
 */

void print_name(char *name, void (*fun_ptr)(char *))
{
	if (fun_ptr && name)
		fun_ptr(name);
}
