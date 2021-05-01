#include "list.h"

/**
* dlistint_len - Funtion that returns the number of elements of a list.
* @h: Head of the list.
* Return: The times it prints.
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tmp = h;
size_t i = 0;

while (tmp)
{
tmp = tmp->next;
i++;
}
return (i);
}
