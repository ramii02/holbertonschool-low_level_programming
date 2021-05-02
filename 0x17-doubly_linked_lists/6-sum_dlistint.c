#include "lists.h"

/**
* sum_dlistint - function that returns the sum of all the data
* @head: Head of a list.
* Return: the sum of the list
*/

int sum_dlistint(dlistint_t *head)
{
int ule = 0;
dlistint_t *tmp = head;

while (tmp)
{
ule += tmp->n;
tmp = tmp->next;
}
return (ule);
}
