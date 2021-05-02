#include "lists.h"
/**
* get_dnodeint_at_index - Function that returns the nth node of a list.
* @head: Head of the list.
* @index: Place of the list.
* Return: the index node 
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *est = head;

while (index > i)
{
est = est->next;
i++
}
return (est);
}
