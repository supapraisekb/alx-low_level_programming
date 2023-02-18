#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry Point
*
*Return: 0 to indicate successfull completion
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
