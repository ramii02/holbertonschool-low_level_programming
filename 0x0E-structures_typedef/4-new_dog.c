#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string
* @s: string to evaluate
* Return: the length of the string
*/
int _strlen(char *ule)
{
int i;

i = 0;

while (ule[i] != '\0')
{
i++;
}

return (i);
}

/**
*_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int mu, i;

mu = 0;

while (src[mu] != '\0')
{
mu++;
}

for (i = 0; i < mu; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *zapa;
int mu1, mu2;

mu1 = _strlen(name);
mu2 = _strlen(owner);

zapa = malloc(sizeof(dog_t));
if (zapa == NULL)
return (NULL);

zapa->name = malloc(sizeof(char) * (mu1 + 1));
if (zapa->name == NULL)
{
free(zapa);
return (NULL);
}
zapa->owner = malloc(sizeof(char) * (mu2 + 1));
if (zapa->owner == NULL)
{
free(zapa);
free(zapa->name);
return (NULL);
}
_strcpy(zapa->name, name);
_strcpy(zapa->owner, owner);
zapa->age = age;

return (zapa);
}
