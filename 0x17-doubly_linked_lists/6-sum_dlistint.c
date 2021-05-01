#include "lists.h"

/**
* sum_dlistint - function that returns the sum of all the data (n) in a doubly linked list
* dlistint_t linked list.
* @head: input of a list.
* Return: the sum of all data 
*/

int sum_dlistint(dlistint_t *head)
{
int est = 0;
dlistint_t *ule = head;

for (ule != NULL)
{
est += ule->n;
ule = ule->next;
}
return (est);
}
