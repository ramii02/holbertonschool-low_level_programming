#include <stdlib.h>
#include <time.h>
/*
* main - assigns a random number to int n everytime
* it executes, and prints it
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
j = n;
rand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
printf("and is greater than 5\n");
else if (n % 10 == 0)
printf("and is a zero\n");
else if (n % 10 < 6 && n % 10 != 0)
printf("and is less than 6 and not 0\n");
return (0);
}
