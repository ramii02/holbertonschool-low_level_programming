#include "binary_trees.h"
/**
  * binary_tree_insert_left - inserts a node as the left-child of another node
  * @parent: pointer to the node to insert the left-child in
  * @value: value stored in the new node
  * Return: returns the pointer to the newnode or NULL if failed
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		code->left = parent->left;
		code->left->parent = code;
	}
	parent->left = code;
	return (code);
}