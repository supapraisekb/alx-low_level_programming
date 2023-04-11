#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* error_check - prints error messages and exits with exit value
* @error: exit value
* @filename: filename associated with the error
* @fd: file descriptor
*
* Return: 0 on success, 1 if it fails
*/
void error_check(int error, char *filename, int fd)
{
switch (error)
{
case 97:
fprintf(stderr, "Usage: cp file_from file_to\n");
break;
case 98:
fprintf(stderr, "Error: Can't read from file %s\n", filename);
break;
case 99:
fprintf(stderr, "Error: Can't write to file %s\n", filename);
break;
case 100:
fprintf(stderr, "Error: Can't close fd %d\n", fd);
break;
default:
break;
}
exit(error);
}

/**
* main - copies the contents of one file to another
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
*
* Return: 0 on success, and a non-zero value on failure.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, n_read, n_written;
char buffer[1024];
/* Check that the correct number of command-line arguments were provided */
if (argc != 3)
{
error_check(97, NULL, 0);
}
/* Open the file_from for reading */
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
error_check(98, argv[1], 0);
}
/* Open the file_to for writing (truncating if it already exists) */
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
error_check(99, argv[2], 0);
}
/* Copy the contents of the file_from to the file_to in 1024-byte chunks */
while ((n_read = read(fd_from, buffer, 1024)) > 0)
{
n_written = write(fd_to, buffer, n_read);
if (n_written == -1 || n_written != n_read)
{
close(fd_from);
close(fd_to);
error_check(99, argv[2], 0);
}
}
/* Close the file descriptors */
if (close(fd_from) == -1 || close(fd_to) == -1)
{
error_check(100, NULL, 0);
}
return (0);
}
