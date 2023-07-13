#include "main.h"
/**
* append_text_to_file - append text if file exists
* @filename: the file to be operated on
* @text_content: what should be added to the file
* Return: 1 on success, -1 on error
*/

int append_text_to_file(const char *filename, char *text_content)
{
int file_D, wBytes, text_contlen = 0;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);

/* Open the file with write only permission */
file_D = open(filename, O_WRONLY | O_APPEND);
if (file_D == -1)
return (-1);

/* Check if text_content is NULL */
if (text_content != NULL)
{
/* Check the length of the text content */
for (text_contlen = 0; text_content[text_contlen]; text_contlen++)
;
/* Write the text content to the end of the file */
wBytes = write(file_D, text_content, text_contlen)
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

