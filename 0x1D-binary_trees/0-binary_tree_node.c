#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - creates binary tree node
 * @parent: pointer to parent node
 * @value: value to save in n
 * Return: pointer to ule node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ule = malloc(sizeof(binary_tree_t));

	if (!ule)
		return (NULL);
	ule->n = value;
	ule->parent = parent;
	ule->left = NULL;
	ule->right = NULL;
	return (ule);
}