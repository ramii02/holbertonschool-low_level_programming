#include "binary_trees.h"
/**
  * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
  * @tree: pointer to the root code of the tree to count the nodes in
  * Return: the nodes where there is at least one child
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t code;

	code = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		code += (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (code);
}