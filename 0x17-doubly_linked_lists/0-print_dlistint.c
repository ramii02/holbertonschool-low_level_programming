#include "lists.h"
/**
* print_dlistint - function that prints all the elements of a list
* @h: pointer to the constant dlistint_t head
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
int nodes = 0;

while (nodes)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
