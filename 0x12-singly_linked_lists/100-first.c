#include <stdio.h>

void print_text(void) __attribute__ ((constructor));
/**
* print_text- prints message before main execution
*
*/
void __attribute__ ((constructor)) print_text()
{

	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
