#include <stdio.h>

/**
* main - entry point
* print alpha
* Return: success
*/
int main(void)
{
int c;

for (c = 'a'; c <= 'z'; c++)

putchar(c);

for (c = 'A'; c <= 'Z'; c++)

putchar(c);

putchar('\n');
return (0);
}

