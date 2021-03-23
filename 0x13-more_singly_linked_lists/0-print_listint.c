#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint -  Displays the values of each node and
* @h: The list
* Return: The number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t ule;

ule = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
ule++;
}
return (ule);
}
