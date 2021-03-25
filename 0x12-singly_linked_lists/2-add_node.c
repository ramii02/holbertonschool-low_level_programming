#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node - function that adds a new node at the beginning of list_t list
* @head: pointer to pointer to list_t list
* @str: string to copy to new node
* Return: the address of the new element, or NULL if it failed
**/
list_t *add_node(list_t **head, const char *str)
{
list_t *ule;
int i;

ule = malloc(sizeof(list_t));
if (ule == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;
ule->str = strdup(str);
if (ule->str == NULL)
{
free(ule);
return (NULL);
}
ule->len = i;
ule->next = *head;
*head = ule;
return (*head);
}
