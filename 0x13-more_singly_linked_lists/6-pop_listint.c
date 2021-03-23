#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Delete the head node of a listint_t linked list
* @head: The list
* Return: The head node's data (n)
*/
int pop_listint(listint_t **head)
{
int n;
listint_t *ule;

if (!head || !(*head))
return (0);

n = (*head)->n;

ule = *head;
*head = (*head)->next;	
free(ule);

return (n);
}
