#include "main.h"

/**
* create_file - It makes a new file and writes text to it
* @filename: the name of the file to create
* @text_content: text to be written to the file
*
* Return: 1 if successful, -1 if there's an error
*/
int create_file(const char *filename, char *text_content)
{
int file_D, wBytes, text_contlen = 0;

/* error checker */
if (filename == NULL)
return (-1);

/* open file with read/write (110 binary = 600) permission */
file_D = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file_D == -1)
return (-1);

/* check if there is any text in the file*/
if (text_content != NULL)
{
/* check the length of the text content in the file */
for (text_contlen = 0; text_content[text_contlen]; text_contlen++)
;
/* Write the text content to the file */
wBytes = write(file_D, text_content, text_contlen);
if (wBytes == -1 || wBytes != text_contlen)
{
close(file_D);
return (-1);
}
}

/* Close the file */
close(file_D);

return (1);
}
