#include "binary_trees.h"

/**
 * binary_tree_sibling - returns node's sibling if it finds one
 * @node: ptr to node of binary tree
 * Return: sibling if found, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	if ((node->parent)->left != node)
		return ((node->parent)->left);
	if ((node->parent)->right != node)
		return ((node->parent)->right);
	return (NULL);
}
/**
 * binary_tree_uncle - finds the sibling of the parent
 * @node: ptr to node
 * Return: sibling of parent or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (binary_tree_sibling(node->parent));
}