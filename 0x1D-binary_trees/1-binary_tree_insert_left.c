#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as left child of another node
 * @parent: pointer to node to insert left child in
 * @value: value to store in ule node
 * Return: pointer to ule node or NULL otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *ule;

if (!parent)
return (NULL);
ule = malloc(sizeof(binary_tree_t));
if (!ule)
return (NULL);
ule->n = value;
ule->parent = parent;
ule->right = NULL;
if (parent->left == NULL)
{
parent->left = ule;
ule->left = NULL;
}
else
{
ule->left = parent->left;
parent->left->parent = ule;
parent->left = ule;
}
return (ule);
}
