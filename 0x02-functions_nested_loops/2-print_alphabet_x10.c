#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet
 * main - check the code
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
char alph;
int count;
count = 0;

while (count < 10)
{
for (alph = 'a'; alph <= 'z'; alph++)
_putchar(alph);
_putchar('\n');
count++;
}
}
