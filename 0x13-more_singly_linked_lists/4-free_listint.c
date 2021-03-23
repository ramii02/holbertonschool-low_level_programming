#include <stdlib.h>
#include "lists.h"

/**
* free_listint - Free a listint_t list
* @head: The list
*/
void free_listint(listint_t *head)
{
listint_t *ule;

while (head)
{
ule = head;
head = head->next;
free(ule);
}
}
