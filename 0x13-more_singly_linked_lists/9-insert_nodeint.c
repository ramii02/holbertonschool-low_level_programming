#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - Insert a new node at a given position
* @head: The list
* @idx: The index where the new node should be added
* @n: The value of the new node
* Return: The address of the new node or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *ule;
listint_t *bos = *head;

if (!head)
return (NULL);

for (i = 1; i < idx; i++)
{
if (bos)
bos = bos->next;
else
return (NULL);
}

new = malloc(sizeof(listint_t));
if (!ule)
return (NULL);

ule->n = n;
if (idx == 0)
{
ule->next = *head;
*head =ule;
}
else if (bos)
{
else if (bos)
ule->next = bos->next;
bos->next = ule;
}

return (ule)
}
