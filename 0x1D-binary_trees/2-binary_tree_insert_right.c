#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node as right child
 * @parent: pointer to node to insert in
 * @value: value to store
 * Return: pointer to ule node otherwise NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ule;

	if (!parent)
		return NULL;
	ule = malloc(sizeof(binary_tree_t));
	if (!ule)
		return NULL;
	ule->n = value;
	ule->parent = parent;
	ule->left = NULL;
	if (parent->right == NULL)
	{
		parent->right = ule;
		ule->right = NULL;
	}
	else
	{
		ule->right = parent->right;
		parent->right->parent = ule;
		parent->right = ule;
	}
	return (ule);
}