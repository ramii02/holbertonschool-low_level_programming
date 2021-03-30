#include "holberton.h"

/**
* append_text_to_file - end of a file
* @filename: the text to
* @text_content: into the file
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int ule, mu, est = 0;

if (!filename)
return (-1);

ule = open(filename, O_WRONLY | O_APPEND);
if (ule < 0)
return (-1);

if (text_content)
{
while (text_content[est])
est++;
mu = write(ule, text_content, est);
if (mu != est)
return (-1);
}

close(ule);

return (1);
}
