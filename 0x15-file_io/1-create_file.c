#include "holberton.h"

/**
* create_file - fills it with text
* @filename: file to create
* @text_content: write in the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int ule, mu, est = 0;

if (!filename)
return (-1);

ule = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (ule < 0)
return (-1);

if (text_content)
{
while (text_content[est])
s++;
t = write(ule, text_content, est);
if (mu != est)
return (-1);
}

close(ule);

return (1);
}
