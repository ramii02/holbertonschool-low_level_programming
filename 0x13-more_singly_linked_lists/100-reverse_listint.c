#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint - Reverse a listint_t linked list
* @head: The list
* Return: Pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *ule = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = ule;
ule = *head;
*head = next;
}

*head = ule;

return (*head);
}
