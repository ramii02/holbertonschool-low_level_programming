#include "binary_trees.h"


/**
 * binary_tree_h - measure the height of a binary tree by edge code
 * @tree: root of binary tree
 * base case is -1 for NULL node
 * Return: maximal number of edges on left or right
 */
int binary_tree_h(const binary_tree_t *tree)
{
	int code;

	code = -1;
	if (tree)
		code = 1 + MAX(binary_tree_h(tree->left),
				binary_tree_h(tree->right));
	return (code);
}
/**
 * binary_tree_balance - returns the difference of the maximal edge count on
 * left and  maximal edge count on right
 * @tree: ptr to root of tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_h(tree->left) -
		binary_tree_h(tree->right));

}