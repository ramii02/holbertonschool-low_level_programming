#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - function prints a string followed by a new line
* @separator: string printed between strings
* @n: number of arguments
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ule;
unsigned int i;
char *mu;

if (n == 0)
{
printf("\n");
return;
}
va_start(ule, n);
for (i = 0; i < n; i++)
mu = va_arg(ule, char *);

if (mu == NULL)
printf("(nil)");
else
printf("%s", mu);

if (i != n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");
va_end(ule);
}
