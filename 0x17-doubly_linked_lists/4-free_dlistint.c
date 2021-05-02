#include "lists.h"
/**
* free_dlistin - Funtion that frees a list
* @head: Head of the list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp);
}
}
