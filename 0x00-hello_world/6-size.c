#include <stdio.h>
/**
*main - Entry point
*Return: 0 (on completion)
*/
int main(void)

{
	char c;
	int i;
	long l;
	long long int k;
	float f;
	printf("The size of char is: %lu byte(s)\n", (unsigned long)(sizeof(c)));
	printf("The size of int is: %lu byte(s)\n", (unsigned long)(sizeof(i)));
	printf("The size of long is: %lu byte(s)\n", (unsigned long)(sizeof(l)));
	printf("The size of long long int is: %lu byte(s)\n", (unsigned long)(sizeof(k)));
	printf("The size of float is: %lu byte(s)\n", (unsigned long)(sizeof(f)));
}
