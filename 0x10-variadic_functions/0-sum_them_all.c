#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all its parameters
* @n: number of arguments
* Return: sum. Otherwise 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list mu;
unsigned int i;
int ule = 0;

if (n <= 0)
return (0);

va_start(mu, n);

for (i = 0; i < n; i++)
{
ule += va_arg(mu, unsigned int);
}

va_end(mu);

return (ule);
}
