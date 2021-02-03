#include<stdio.h>
/**
*main - entry point
*print msg with printf function
*Return: success
*/
int main(void)
{
printf("Size of a char: %d bytes\n", sizeof(char));
printf("Size of an int: %d bytes\n", sizeof(int));
printf("Size of a long int: %d bytes\n", sizeof(long int));
printf("size of a long long int: %d byte\n", sizeof(long long));
printf("Size of a long long int: %d byte\n", sizeof(float));
return (0);
}
