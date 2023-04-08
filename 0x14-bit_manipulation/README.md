# Project 0x14C- Bit manipulation
This projectis to test my knowledge of the concepts of bit manipulation in C program. Hexadecimal to binary to decimal conversions can be done to manipulate bits in a string of character (1byte of Data) using bitwise operators such as
AND `&`, OR `|`, XOR `^`, and NOT `~` operators.  Another type of operators used to manipulate Bits are the leftshift `<<` and rightshift `>>` operators.

## Header Files :file_folder:
all the function prototypes are located in the header files * [main.h](./main.h):

## Putcahar
* [_putchar.c](./_putchar.c): is to be used to display the output of a character to the output while printf is forbidden.

## Task Questions :page_wit_curl:

Task 0.0:
Write a function that converts a binary number to an unsigned int.

*Prototype: unsigned int binary_to_uint(const char *b);
*where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
*there is one or more chars in the string b that is not 0 or 1
*b is NULL

Task 1.1:
Write a function that prints the binary representation of a number.

*Prototype: void print_binary(unsigned long int n);
*Format: see example
*You are not allowed to use arrays
*You are not allowed to use malloc
*You are not allowed to use the % or / operators


Task 2.1:
Write a function that returns the value of a bit at a given index.

*Prototype: int get_bit(unsigned long int n, unsigned int index);
*where index is the index, starting from 0 of the bit you want to get
*Returns: the value of the bit at index index or -1 if an error occured

Task 3.1:
Write a function that sets the value of a bit to 1 at a given index.

*Prototype: int set_bit(unsigned long int *n, unsigned int index);
*where index is the index, starting from 0 of the bit you want to set
*Returns: 1 if it worked, or -1 if an error occurred

Task 4.1:
Write a function that sets the value of a bit to 0 at a given index.

*Prototype: int clear_bit(unsigned long int *n, unsigned int index);
*where index is the index, starting from 0 of the bit you want to set
*Returns: 1 if it worked, or -1 if an error occurred

Task 5.1:
Write a function that returns the number of bits you would need to flip to get from one number to another.

*Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
*You are not allowed to use the % or / operators

Task 6 Endiannes:
Write a function that checks the endianness.

*Prototype: int get_endianness(void);
*Returns: 0 if big endian, 1 if little endian

Task 7 Crackme3
Find the password for this program.

*Save the password in the file 101-password
*Your file should contain the exact password, no new line, no extra space
