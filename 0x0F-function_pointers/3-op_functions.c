#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* op_add - adds 2 numbers
* @a: first number
* @b: second number
* Return: answer
*/
int op_add(int a, int b)
{
int ule;

ule = a + b;
return (ule);
}
/**
* op_sub - subtract 2 numbers
* @a: first number
* @b: second number
* Return: answer
*/
int op_sub(int a, int b)
{
int ule;

ule = a - b;
return (ule);
}
/**
* op_mul - multiply 2 nunmbers
* @a: first number
* @b: second number
* Return: answer
*/
int op_mul(int a, int b)
{
int mu;

mu = a * b;
return (mu);
}
/**
* op_div - divide 2 numbers
* @a: first number
* @b: second number
* Return: answer
*/
int op_div(int a, int b)
{
int mu;

mu = a / b;
return (mu);
}
/**
* op_mod - find remainder of 2 numbers
* @a: first number
* @b: second number
* Return: answer.
*/
int op_mod(int a, int b)
{
int mu;

mu = a % b;
return (mu);
}
