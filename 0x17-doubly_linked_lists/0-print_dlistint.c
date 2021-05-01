#include "lists.h"
/**
* print_dlistint - function that prints all the elements of a list
* @h: pointer to the constant dlistint_t head
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t est= 0;
const dlistint_t *ule = h;

if (!ule)
return (0);
while (!ule)
{
printf("%d\n", ule->n);
ule = ule->next;
est++;
}
return (est);
}
