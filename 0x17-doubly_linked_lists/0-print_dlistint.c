#include "lists.h"

/**
* print_dlistint - function that prints all the elements 
* @h: node.
* Return: EXIT_SUCCESS.
*/

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *est = h;
size_t i = 0;

for (est)
{
printf("%d\n", est->n);
est = est->next;
i++;
}
return (i);
}
