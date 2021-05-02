#include "lists.h"
/**
* free_dlistint - Funtion that frees a list.
* @head: Head of the list..
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *ule;

while (head != NULL)
{
ule = head;
head = head->next;
free(ule);
}
}
