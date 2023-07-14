#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* copy_file - copies the contents of one file to another
*
* @source_fd: file descriptor for the file to copy from
* @dest_fd: file descriptor for the file to copy to
* @source_file: name of the source file
* @dest_file: name of the destination file
*
* Return: 0 on success, -1 on failure
*/
void copy_file(int source_fd, int dest_fd, char *source_file, char *dest_file)
{
ssize_t len_read = 1, len_written = 1;
char buffer[1024];

while (len_read)
{
len_read = read(source_fd, buffer, sizeof(buffer));
if (len_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
close(source_fd);
close(dest_fd);
exit(98);
}

if (len_read == NULL)
break;

len_written = write(dest_fd, buffer, len_read);
if (len_written == -1 || len_written != len_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
close(source_fd);
close(dest_fd);
exit(99);
}
}
}

/**
* main - entry point of the program
*
* @argc: the number of arguments passed to the program
* @argv: an array of strings containing the arguments passed to the program
*
* Return: 0 on success, 1 on failure
*/
int main(int argc, char **argv)
{
int source_fd, dest_fd;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file1 file2\n", argv[0]);
exit(97);
}

source_fd = open(argv[1], O_RDONLY);
if (source_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

dest_fd = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
if (dest_fd == -1)
dest_fd = open(argv[2], O_TRUNC | O_WRONLY);

if (dest_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(source_fd);
exit(99);
}
copy_file(source_fd, dest_fd, argv[1], argv[2]);
if (close(source_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close source file %s\n", argv[1]);
close(dest_fd);
exit(100);
}
if (close(dest_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close destination file %s\n", argv[2]);
exit(100);
}
return (0);
}
