#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX stdout
* @filename: file to read
* @letters: number of letters to be read and printed
*
* Return: number of letters that can be read and printed
* On fail or if filename is NULL returns 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_D, rBytes, wBytes;
char *buff_size;

/* Check for errors in filename */
if (!filename)
return (0);

/* file opening */
file_D = open(filename, O_RDONLY);
if (file_D == -1)
return (0);
/* Allocate Buffer Size */
buff_size = malloc(sizeof(char) * letters);
if (!buff_size)
{
close(file_D);
return (0);
}
/* Read the bytes of Text from the file */
rBytes = read(file_D, buff_size, letters);
if (rBytes == -1)
{
free(buff_size);
close(file_D);
return (0);
}
/* Write the bytes of text to stdout */
wBytes = write(STDOUT_FILENO, buff_size, rBytes);
if (wBytes == -1 || wBytes != rBytes)
{
free(buff_size);
close(file_D);
return (0);
}
free(buff_size);
close(file_D);
return (rBytes);
}
