#include <stdlib.h>
#include <stdio.h>
/**
 * * main - entry point
 * * Print only the smallest combination of two digits
 * * Return: success
*/
int main(void)
{
int c, i;
int d = '1';

for (c = '0'; c <= '9'; c++)
{
for (i = d; i <= '9'; i++)
{
putchar(c);
putchar(i);
if ((c != '8') || (i != '9'))
{
putchar(',');
putchar(' ');
}
}
d++;
}
putchar('\n');
return (0);
}
