#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_iterator - executes a function given as a parameter
* Return: void
* @array: start of the array
* @size: size of the array
* @action: pointer to the function used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (array != 0 && action != 0)
{

while (i < size)
{
action(array[i]);
i++;
}
}
}
