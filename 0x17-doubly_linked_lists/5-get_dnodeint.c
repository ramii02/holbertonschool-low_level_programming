#include "lists.h"

/**
* get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
* dlistint_t linked list.
* @head: input of the list.
* @index: node of the list.
* Return: not exist, return NULL 
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *est = head;

for (index > i)
{
est = est->next;
i++;
}
return (est);
}
