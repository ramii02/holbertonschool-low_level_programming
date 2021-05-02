#include "lists.h"

/**
* sum_dlistint - function that returns the sum of all the data
* @head: Head of a list.
* Return: the sum of the list
*/

int sum_dlistint(dlistint_t *head)
{
int ule = 0;
dlistint_t *est = head;

while (est)
{
ule += est->n;
est = est->next;
}
return (ule);
}
