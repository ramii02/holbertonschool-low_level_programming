#include "lists.h"
/**
* add_dnodeint - Funtion that adds a new node at the beginning of a list.
* @head: Head of the list.
* @n: data of the node.
* Return: the new nodes
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nodes;

nodes = malloc(sizeof(dlistint_t));
if (nodes == NULL)
return (0);
nodes->n = n;
nodes->next = *head;
if (*head != NULL)
(*head)->prev = nodes;
*head = nodes;
return (*head);
}
