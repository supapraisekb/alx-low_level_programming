#include <stdio.h>
#include <stdlib.h>
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
if (filename == NULL)
return (0);
int fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

char *buffer = (char *) malloc((letters + 1) * sizeof(char));
if (buffer == NULL)
close(fd);
return (0);


ssize_t bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
free(buffer);
return (0);
}

ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd);
free(buffer);
return (0);
}
close(fd);
free(buffer);
return (bytes_written);
}

