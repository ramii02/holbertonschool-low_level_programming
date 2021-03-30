#include "holberton.h"

/**
* read_textfile - function that reads a text file and prints it to the s/o
* @filename: to read
* @letters: read and print
* Return: read and print or 0 if fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int ule = 0;
ssize_t mu = 0;
ssize_t est = 0;
char *rami;

if (!filename)
return (0)
rami = malloc(size(char) * letters);
if (!rami)
return (0);
ule = open(filename, 0_RDONLY);
if (ule == -1)
{
free(rami);
return (0);
}
mu = read(ule, rami, letters);
if (ule != -1)
{
est = write(STDOUT_FILENO, rami, mu);
if (est == -1)
{
free(rami);
return (0);
}
}
free(rami);
close(ule);
return (mu);
}
