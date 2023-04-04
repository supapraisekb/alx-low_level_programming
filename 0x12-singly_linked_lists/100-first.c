#include <stdio.h>

void print_before(void) __attribute__ ((constructor));

/**
* before_main - Function that prints a message before main is executed
*
* This function is executed before the main function and prints the message
*/
void __attribute__ ((constructor)) print_before()
{

	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
