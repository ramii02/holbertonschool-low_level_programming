#include "holberton.h"

/**
* main - print program name.
* @argc: number of arguments.
* @argv: arguments.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i = 0;
char *est = argv[argc - 1];

while (est[i] != '\0')
{
_putchar (est[i]);
i++;
}
_putchar ('\n');
return (0);
}
