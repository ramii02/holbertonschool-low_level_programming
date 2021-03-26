#include "holberton.h"

/**
* get_endianness - Check the endianness
* Return: 0 if big endian, 1 if little endian
* exit zero
*/
int get_endianness(void)
{
unsigned int i = 1;
char *ule = (char *) &i;

return ((int) *ule);
}
