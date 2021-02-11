#include "holberton.h"
#include <stdio.h>

/**
* main - check the code for Holberton School students.
* that checks for a digit (0 through 9).
* @c: the character to be checked
* Return: Always 0
*/

int _isdigit(int c);

{
int c;

if (c > 0 && c < 9)
return (1);
else
return (0);
}
