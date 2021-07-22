#include "binary_trees.h"
/**
  * binary_tree_insert_right - inserts a node as right-child of another node
  * @parent: pointer to the node to insert the right-child in
  * @value: the value to store in the new node
  * Return: returns pointer to the newnode of NULL if failed
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *code;

	if (parent == NULL)
		return (NULL);
	code = malloc(sizeof(binary_tree_t));
	if (code == NULL)
		return (NULL);
	code->n = value;
	code->parent = parent;
	code->left = NULL;
	code->right = NULL;
	if (parent->right != NULL)
	{
		code->right = parent->right;
		code->right->parent = code;
	}
	parent->right = code;
	return (code);
}