#include "lists.h"
/**
* get_dnodeint_at_index - return a node of double linked list
* @head: head of the double list to print
* @index: number
* Return: the length of nodes
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp = head;

while (index > i)
{
tmp = tmp->next;
i++;
}
return (tmp);
}
