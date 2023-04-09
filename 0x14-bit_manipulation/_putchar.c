#include "main.h"
#include <unistd.h>

/**
  *_putchar - this function wrties a character to stdout
  *@c: the character to be printed to stdout
  *
  *Return: If successful 1.
  *if there is an error return -1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


