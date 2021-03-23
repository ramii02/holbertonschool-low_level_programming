#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - Add a new node at the beginning of a listint_t list
* @head: The list
* @n: The integer
* Return: The address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ule;

if (!head)
return (NULL);

ule = malloc(sizeof(listint_t));
if (!ule)
return (NULL);

ule->n = n;
ule->next = *head;

*head = ule;

return (ule);
}
