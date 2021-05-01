#include "list.h"

/**
* dlistint_len - function that returns the number of elements in a linked 
* @h: pointer to the constant dlistint_t head
* Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
int nodes = 0;

for (nodes = 0; h != NULL; nodes++)
{
h = h->next;
}
return (nodes);
}
